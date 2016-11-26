/*+@@file@@----------------------------------------------------------------*//*!
 \file		TextAnimationSample.c
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Wed Nov 16 12:32:07 2016
 \date		Modified on Wed Nov 16 12:32:07 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "TextAnimationSample.h"
#include <guiddef.h>

INSTANZIATE_GUID(IID_IDWriteFactory, 0xb859ee5a, 0xd838, 0x4b5b, 0xa2, 0xe8, 0x1a, 0xdc, 0x7d, 0x93, 0xdb, 0x48);

BOOL IsRunning(DemoApp *this)
{
	return this->m_fRunning;
}

/******************************************************************
 *                                                                 *
 *  WinMain                                                        *
 *                                                                 *
 *  Application entrypoint                                         *
 *                                                                 *
 ******************************************************************/

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// Ignoring the return value because we want to continue running even in the
	// unlikely event that HeapSetInformation fails.
	HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);

	if (SUCCEEDED(CoInitialize(NULL)))
	{
		{
			DemoApp *app = DemoAppNew();

			if (SUCCEEDED(Initialize(app)))
			{
				RunMessageLoop(app);
			}
		}
		CoUninitialize();
	}

	return 0;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::DemoApp constructor                                   *
 *                                                                 *
 *  Initialize member data                                         *
 *                                                                 *
 ******************************************************************/

DemoApp *DemoAppNew(void)
{
	DemoApp *this = malloc(sizeof(DemoApp));
	if (!this)
		return NULL;
	ZeroMemory(this, sizeof(DemoApp));

	this->m_hwnd = NULL;
	this->m_pD2DFactory = NULL;
	this->m_pDWriteFactory = NULL;
	this->m_pRT = NULL;
	this->m_pTextFormat = NULL;
	this->m_pTextLayout = NULL;
	this->m_pBlackBrush = NULL;
	this->m_pOpacityRT = NULL;
	this->m_startTime = 0;
	this->m_animationStyle = Translation;
	this->m_renderingMethod = Default;

	return this;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::~DemoApp destructor                                   *
 *                                                                 *
 *  Tear down resources                                            *
 *                                                                 *
 ******************************************************************/

void DemoAppDelete(DemoApp *this)
{
	SafeRelease(&this->m_pD2DFactory);
	SafeRelease(&this->m_pDWriteFactory);
	SafeRelease(&this->m_pRT);
	SafeRelease(&this->m_pTextFormat);
	SafeRelease(&this->m_pTextLayout);
	SafeRelease(&this->m_pBlackBrush);
	SafeRelease(&this->m_pOpacityRT);
}

/******************************************************************
 *                                                                 *
 *  DemoApp::Initialize                                            *
 *                                                                 *
 *  Create application window and device-independent resources     *
 *                                                                 *
 ******************************************************************/

HRESULT Initialize(DemoApp *this)
{
	HRESULT hr;

	this->m_fRunning = FALSE;

	hr = CreateDeviceIndependentResources(this);
	if (SUCCEEDED(hr))
	{
		//register window class
		WNDCLASSEX wcex = { sizeof(WNDCLASSEX) };
		wcex.style = CS_HREDRAW | CS_VREDRAW;
		wcex.lpfnWndProc = WndProc;
		wcex.cbClsExtra = 0;
		wcex.cbWndExtra = sizeof(LONG_PTR);
		wcex.hInstance = HINST_THISCOMPONENT;
		wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
		wcex.hbrBackground = NULL;
		wcex.lpszMenuName = NULL;
		wcex.lpszClassName = L"D2DDemoApp";

		RegisterClassEx(&wcex);

		// Create the application window.
		//
		// Because the CreateWindow function takes its size in pixels, we
		// obtain the system DPI and use it to scale the window size.
		FLOAT dpiX;
		FLOAT dpiY;
		this->m_pD2DFactory->lpVtbl->GetDesktopDpi(this->m_pD2DFactory, &dpiX, &dpiY);

		this->m_hwnd = CreateWindow(L"D2DDemoApp", L"D2D Demo App", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, (UINT) (ceil(640.0f * dpiX / 96.0f)), (UINT) (ceil(480.0f * dpiY / 96.0f)), NULL, NULL, HINST_THISCOMPONENT, this);
		hr = this->m_hwnd ? S_OK : E_FAIL;
		if (SUCCEEDED(hr))
		{
			this->m_fRunning = TRUE;

			ShowWindow(this->m_hwnd, SW_SHOWNORMAL);
			UpdateWindow(this->m_hwnd);
		}
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::CreateDeviceIndependentResources                      *
 *                                                                 *
 *  This method is used to create resources which are not bound    *
 *  to any device. Their lifetime effectively extends for the      *
 *  duration of the app. These resources include the D2D,          *
 *  DWrite factories; and a DWrite Text Format object              *
 *  (used for identifying particular font characteristics) and     *
 *  a D2D geometry.                                                *
 *                                                                 *
 ******************************************************************/

HRESULT CreateDeviceIndependentResources(DemoApp *this)
{
	static const WCHAR msc_fontName[] = L"Gabriola";
	static const FLOAT msc_fontSize = 50;
	static const WCHAR sc_helloWorld[] = L"The quick brown fox jumped over the lazy dog!";
	static const UINT stringLength = ARRAYSIZE(sc_helloWorld) - 1;
	HRESULT hr;

	//create D2D factory
	hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, __uuidof(ID2D1Factory), NULL, (void **)&this->m_pD2DFactory);
	if (SUCCEEDED(hr))
	{
		//create DWrite factory
		hr = DWriteCreateFactory(DWRITE_FACTORY_TYPE_ISOLATED,	//DWRITE_FACTORY_TYPE_SHARED
			__uuidof(IDWriteFactory), (IUnknown **) (&this->m_pDWriteFactory));
	}

	if (SUCCEEDED(hr))
	{
		//create DWrite text format object
		hr = this->m_pDWriteFactory->lpVtbl->CreateTextFormat(this->m_pDWriteFactory, msc_fontName, NULL, DWRITE_FONT_WEIGHT_NORMAL, DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL, msc_fontSize, L"",	//locale
			&this->m_pTextFormat);
	}
	if (SUCCEEDED(hr))
	{
		//center the text horizontally
		this->m_pTextFormat->lpVtbl->SetTextAlignment(this->m_pTextFormat, DWRITE_TEXT_ALIGNMENT_CENTER);

		hr = this->m_pDWriteFactory->lpVtbl->CreateTextLayout(this->m_pDWriteFactory, &sc_helloWorld[0], stringLength, this->m_pTextFormat, 300,	// maxWidth
			1000,	// maxHeight
			&this->m_pTextLayout);
	}
	if (SUCCEEDED(hr))
	{
		//
		// We use typographic features here to show how to account for the
		// overhangs that these features will produce. See the code in
		// ResetAnimation that calls GetOverhangMetrics(). Note that there are
		// fonts that can produce overhangs even without the use of typographic
		// features- this is just one example.
		//
		IDWriteTypography *pTypography = NULL;
		hr = this->m_pDWriteFactory->lpVtbl->CreateTypography(this->m_pDWriteFactory, &pTypography);
		if (SUCCEEDED(hr))
		{
			DWRITE_FONT_FEATURE fontFeature = {
				DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_7,
				1
			};
			hr = pTypography->lpVtbl->AddFontFeature(pTypography, fontFeature);
			if (SUCCEEDED(hr))
			{
				DWRITE_TEXT_RANGE textRange = { 0, stringLength };
				hr = this->m_pTextLayout->lpVtbl->SetTypography(this->m_pTextLayout, pTypography, textRange);
			}

			pTypography->lpVtbl->Release(pTypography);
		}
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::CreateDeviceResources                                 *
 *                                                                 *
 *  This method creates resources which are bound to a particular  *
 *  D3D device. It's all centralized here, in case the resources   *
 *  need to be recreated in case of D3D device loss (eg. display   *
 *  change, remoting, removal of video card, etc).                 *
 *                                                                 *
 ******************************************************************/

HRESULT CreateDeviceResources(DemoApp *this)
{
	HRESULT hr = S_OK;

	if (!this->m_pRT)
	{
		RECT rc;
		GetClientRect(this->m_hwnd, &rc);

		D2D1_SIZE_U size = { rc.right - rc.left, rc.bottom - rc.top };

		//
		// Create a D2D render target
		//
		// Note: we only use D2D1_PRESENT_OPTIONS_IMMEDIATELY so that we can
		// easily measure the framerate. Most apps should not use this
		// flag.
		//
		D2D1_RENDER_TARGET_PROPERTIES rtp = {
												D2D1_RENDER_TARGET_TYPE_DEFAULT,
												{DXGI_FORMAT_UNKNOWN, D2D1_ALPHA_MODE_UNKNOWN}
												,
												0.0f, 0.0f,
												D2D1_RENDER_TARGET_USAGE_NONE,
												D2D1_FEATURE_LEVEL_DEFAULT
											};
		D2D1_HWND_RENDER_TARGET_PROPERTIES hrtp =  {
														this->m_hwnd,
														size,
														D2D1_PRESENT_OPTIONS_IMMEDIATELY
													};
		hr = this->m_pD2DFactory->lpVtbl->CreateHwndRenderTarget(this->m_pD2DFactory, &rtp, &hrtp, &this->m_pRT);
		if (SUCCEEDED(hr))
		{
			//
			// Nothing in this sample requires antialiasing so we set the antialias
			// mode to aliased up front.
			//
			this->m_pRT->lpVtbl->SetAntialiasMode(this->m_pRT, D2D1_ANTIALIAS_MODE_ALIASED);

			//create a black brush
			D2D1_COLOR_F BlackColor;
			D2D1_Fcolor(&BlackColor, D2D1ColorF_Black, 1.0);
			hr = this->m_pRT->lpVtbl->CreateSolidColorBrush(this->m_pRT, &BlackColor, NULL, &this->m_pBlackBrush);
		}
		if (SUCCEEDED(hr))
		{
			hr = ResetAnimation(this, TRUE);	// resetClock
		}
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::DiscardDeviceResources                                *
 *                                                                 *
 *  Discard device-specific resources which need to be recreated   *
 *  when a D3D device is lost                                      *
 *                                                                 *
 ******************************************************************/

void DiscardDeviceResources(DemoApp *this)
{
	SafeRelease(&this->m_pRT);
	SafeRelease(&this->m_pBlackBrush);
	SafeRelease(&this->m_pOpacityRT);
}

/******************************************************************
 *                                                                 *
 *  DemoApp::RunMessageLoop                                        *
 *                                                                 *
 *  Main window message loop                                       *
 *                                                                 *
 ******************************************************************/

void RunMessageLoop(DemoApp *this)
{
	while (IsRunning(this))
	{
		MSG msg;
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
}

/******************************************************************
 *                                                                 *
 *  DemoApp::OnChar                                                *
 *                                                                 *
 *  Responds to input from the user.                               *
 *                                                                 *
 ******************************************************************/

HRESULT OnChar(DemoApp *this, SHORT key)
{
	HRESULT hr = S_OK;

	BOOL resetAnimation = TRUE;
	BOOL resetClock = TRUE;

	switch (key)
	{
		case 't':
			if (this->m_animationStyle & Translation)
			{
				this->m_animationStyle &= ~Translation;
			}
			else
			{
				this->m_animationStyle |= Translation;
			}
			break;

		case 'r':
			if (this->m_animationStyle & Rotation)
			{
				this->m_animationStyle &= ~Rotation;
			}
			else
			{
				this->m_animationStyle |= Rotation;
			}
			break;

		case 's':
			if (this->m_animationStyle & Scaling)
			{
				this->m_animationStyle &= ~Scaling;
			}
			else
			{
				this->m_animationStyle |= Scaling;
			}
			break;

		case '1':
		case '2':
		case '3':
			this->m_renderingMethod = (TextRenderingMethodEnum) (key - '1');
			resetClock = FALSE;
			break;

		default:
			resetAnimation = FALSE;
			resetClock = FALSE;
	}

	if (resetAnimation)
	{
		hr = ResetAnimation(this, resetClock);
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::UpdateWindowText                                      *
 *                                                                 *
 *  This method updates the window title bar with info about the   *
 *  current animation style and rendering method. It also outputs  *
 *  the framerate.                                                 *
 *                                                                 *
 ******************************************************************/

void UpdateWindowText(DemoApp *this)
{
	static LONGLONG sc_lastTimeStatusShown = 0;

	//
	// Update the window status no more than 10 times a second. Without this
	// check, the performance bottleneck could potentially be the time it takes
	// for Windows to update the title.
	//
	if ((RingBufferGetCount(&this->m_times) > 0) && (RingBufferGetLast(&this->m_times) > (sc_lastTimeStatusShown + 1000000)))
	{
		//
		// Determine the frame rate by computing the difference in clock time
		// between this frame and the frame we rendered 10 frames ago.
		//
		sc_lastTimeStatusShown = RingBufferGetLast(&this->m_times);

		LARGE_INTEGER frequency;
		QueryPerformanceFrequency(&frequency);

		float fps = 0.0f;
		if (RingBufferGetCount(&this->m_times) > 0)
		{
			fps = (RingBufferGetCount(&this->m_times) - 1) * frequency.QuadPart / (float)((RingBufferGetLast(&this->m_times) -
																							RingBufferGetFirst(&this->m_times)));
		}

		//
		// Add other useful information to the window title.
		//

		wchar_t *style = NULL;
		switch (this->m_animationStyle)
		{
			case None:
				style = L"None";
				break;
			case Translation:
				style = L"Translation";
				break;
			case Rotation:
				style = L"Rotation";
				break;
			case Scaling:
				style = L"Scale";
				break;
		}

		wchar_t *method = NULL;
		switch (this->m_renderingMethod)
		{
			case Default:
				method = L"Default";
				break;
			case Outline:
				method = L"Outline";
				break;
			case UseA8Target:
				method = L"UseA8Target";
				break;
		}

		wchar_t title[255];
		StringCchPrintf(title, ARRAYSIZE(title), L"AnimationStyle: %ls%ls%ls, Method: %ls, %#.1f fps",
								(this->m_animationStyle & Translation) ? L"+t" : L"-t",
								(this->m_animationStyle & Rotation) ? L"+r" : L"-r",
								(this->m_animationStyle & Scaling) ? L"+s" : L"-s", method, fps);

		SetWindowText(this->m_hwnd, title);
	}
}

/******************************************************************
 *                                                                 *
 *  DemoApp::ResetAnimation                                        *
 *                                                                 *
 *  This method does the necessary work to change the current      *
 *  animation style.                                               *
 *                                                                 *
 ******************************************************************/

HRESULT ResetAnimation(DemoApp *this, BOOL resetClock)
{
	HRESULT hr = S_OK;

	if (resetClock)
	{
		this->m_startTime = GetTickCount();
	}

	//
	// Release the opacity mask. We will regenerate it if the current animation
	// style demands it.
	//
	SafeRelease(&this->m_pOpacityRT);

	if (this->m_renderingMethod == Outline)
	{
		//
		// Set the rendering mode to OUTLINE mode. To do this we first create
		// a default params object and then make a copy with the given modification.
		//
		IDWriteRenderingParams *pDefaultParams = NULL;
		hr = this->m_pDWriteFactory->lpVtbl->CreateRenderingParams(this->m_pDWriteFactory, &pDefaultParams);

		if (SUCCEEDED(hr))
		{
			IDWriteRenderingParams *pRenderingParams = NULL;
			hr = this->m_pDWriteFactory->lpVtbl->CreateCustomRenderingParams(this->m_pDWriteFactory, pDefaultParams->lpVtbl->GetGamma(pDefaultParams), pDefaultParams->lpVtbl->GetEnhancedContrast(pDefaultParams), pDefaultParams->lpVtbl->GetClearTypeLevel(pDefaultParams), pDefaultParams->lpVtbl->GetPixelGeometry(pDefaultParams), DWRITE_RENDERING_MODE_OUTLINE, &pRenderingParams);
			if (SUCCEEDED(hr))
			{
				this->m_pRT->lpVtbl->SetTextRenderingParams(this->m_pRT, pRenderingParams);

				pRenderingParams->lpVtbl->Release(pRenderingParams);
			}
			pDefaultParams->lpVtbl->Release(pDefaultParams);
		}
	}
	else
	{
		// Reset the rendering mode to default.
		this->m_pRT->lpVtbl->SetTextRenderingParams(this->m_pRT, NULL);
	}

	if (SUCCEEDED(hr) && this->m_renderingMethod == UseA8Target)
	{
		//
		// Create a compatible A8 Target to store the text as an opacity mask.
		//
		// Note: To reduce sampling error in the scale animation, it might be
		//       preferable to create multiple masks for the text at different
		//       resolutions.
		//

		FLOAT dpiX;
		FLOAT dpiY;
		this->m_pRT->lpVtbl->GetDpi(this->m_pRT, &dpiX, &dpiY);

		//
		// It is important to obtain the overhang metrics here in case the text
		// extends beyond the layout max-width and max-height.
		//
		DWRITE_OVERHANG_METRICS overhangMetrics;
		this->m_pTextLayout->lpVtbl->GetOverhangMetrics(this->m_pTextLayout, &overhangMetrics);

		//
		// Because the overhang metrics can be off slightly given that these
		// metrics do not account for antialiasing, we add an extra pixel for
		// padding.
		//
		D2D1_SIZE_F padding = { 96.0f / dpiX, 96.0f / dpiY };
		this->m_overhangOffset = (D2D1_POINT_2F){ceil(overhangMetrics.left + padding.width), ceil(overhangMetrics.top + padding.height)};

		//
		// The TRUE width of the text is the max width + the overhang
		// metrics + padding in each direction.
		//
		D2D1_SIZE_F maskSize = {
			overhangMetrics.right + padding.width + this->m_overhangOffset.x + this->m_pTextLayout->lpVtbl->GetMaxWidth(this->m_pTextLayout),
			overhangMetrics.bottom + padding.height + this->m_overhangOffset.y + this->m_pTextLayout->lpVtbl->GetMaxHeight(this->m_pTextLayout)
		};

		// Round up to the nearest pixel
		D2D1_SIZE_U maskPixelSize = {
										(UINT) (ceil(maskSize.width * dpiX  / 96.0f)),
										(UINT) (ceil(maskSize.height * dpiY / 96.0f))
									};

		//
		// Create the compatible render target using desiredPixelSize to avoid
		// blurriness issues caused by a fractional-pixel desiredSize.
		//
		D2D1_PIXEL_FORMAT alphaOnlyFormat = { DXGI_FORMAT_A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED };
		hr = this->m_pRT->lpVtbl->CreateCompatibleRenderTarget(this->m_pRT, NULL, &maskPixelSize,
																&alphaOnlyFormat, D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_NONE, &this->m_pOpacityRT);
		if (SUCCEEDED(hr))
		{
			//
			// Draw the text to the opacity mask. Note that we can use pixel
			// snapping now given that subpixel translation can now happen during
			// the FillOpacityMask method.
			//
			this->m_pOpacityRT->lpVtbl->BeginDraw(this->m_pOpacityRT);
			D2D1_COLOR_F BlackColor;
			D2D1_Fcolor(&BlackColor, D2D1ColorF_Black, 0.0);
			this->m_pOpacityRT->lpVtbl->Clear(this->m_pOpacityRT, &BlackColor);
			this->m_pOpacityRT->lpVtbl->DrawTextLayout(this->m_pOpacityRT, this->m_overhangOffset, this->m_pTextLayout,
																			(ID2D1Brush *)this->m_pBlackBrush, D2D1_DRAW_TEXT_OPTIONS_NO_SNAP);
			hr = this->m_pOpacityRT->lpVtbl->EndDraw(this->m_pOpacityRT, NULL, NULL);
		}
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::CalculateTransform                                    *
 *                                                                 *
 *  Calculates the transform based on the current time             *
 *                                                                 *
 ******************************************************************/

void CalculateTransform(DemoApp *this, D2D1_MATRIX_3X2_F *pTransform)
{
	// calculate a 't' value that will linearly interpolate from 0 to 1 and back every 20 seconds
	DWORD currentTime = GetTickCount();
	if (this->m_startTime == 0)
	{
		this->m_startTime = currentTime;
	}
	float t = 2 * ((currentTime - this->m_startTime) % 20000) / 20000.0f;
	if (t > 1.0f)
	{
		t = 2 - t;
	}

	// calculate animation parameters
	float rotation = 0;
	float translationOffset = 0;
	float scaleMultiplier = 1.0f;
	if (this->m_animationStyle & Translation)
	{
		// range from -100 to 100
		translationOffset = (t - 0.5f) * 200;
	}

	if (this->m_animationStyle & Rotation)
	{
		// range from 0 to 360
		rotation = t * 360.0f;
	}

	if (this->m_animationStyle & Scaling)
	{
		// range from 1/4 to 2x the normal size
		scaleMultiplier = t * 1.75f + 0.25f;
	}

	D2D1_SIZE_F size;
	this->m_pRT->lpVtbl->GetSize(this->m_pRT, &size);

	D2D1_MATRIX_3X2_F rotMx = { 0 };
	D2D1MakeRotateMatrix(rotation, (D2D1_POINT_2F){0.0f, 0.0f}, &rotMx);
	D2D1_MATRIX_3X2_F ScaleMx = { 0 };
	D2D1_ScaleMatrix(&((D2D1_SIZE_F){scaleMultiplier, scaleMultiplier}), (D2D1_POINT_2F){0.0f, 0.0f}, &ScaleMx);
	D2D1_MATRIX_3X2_F translateMx = { 0 };
	D2D1_TranslateMatrix(&((D2D1_SIZE_F){translationOffset + size.width / 2.0f, translationOffset + size.height / 2.0f}), &translateMx);

	//*pTransform = D2D1: : Matrix3x2F: : Rotation(rotation) *
	//              D2D1: : Matrix3x2F: : Scale(scaleMultiplier, scaleMultiplier) *
	//              D2D1: : Matrix3x2F: :Translation(translationOffset + size.width / 2.0f, translationOffset + size.height / 2.0f);
	D2D1_SetProduct(pTransform, &rotMx, &ScaleMx);
	D2D1_SetProduct(pTransform, pTransform, &translateMx);
}

/******************************************************************
 *                                                                 *
 *  DemoApp::OnRender                                              *
 *                                                                 *
 *  Called whenever the application needs to display the client    *
 *  window.                                                        *
 *                                                                 *
 *  Note that this function will not render anything if the window *
 *  is occluded (e.g. when the screen is locked).                  *
 *  Also, this function will automatically discard device-specific *
 *  resources if the D3D device disappears during function         *
 *  invocation, and will recreate the resources the next time it's *
 *  invoked.                                                       *
 *                                                                 *
 ******************************************************************/

HRESULT OnRender(DemoApp *this)
{
	HRESULT hr;

	//
	// We use a ring buffer to store the clock time for the last 10 frames.
	// This lets us eliminate a lot of noise when computing framerate.
	//
	LARGE_INTEGER time;
	QueryPerformanceCounter(&time);
	RingBufferAdd(&this->m_times, time.QuadPart);

	hr = CreateDeviceResources(this);

	if (SUCCEEDED(hr) && !(this->m_pRT->lpVtbl->CheckWindowState(this->m_pRT) & D2D1_WINDOW_STATE_OCCLUDED))
	{
		D2D1_MATRIX_3X2_F transform;
		CalculateTransform(this, &transform);

		this->m_pRT->lpVtbl->BeginDraw(this->m_pRT);

		D2D1_COLOR_F WhiteColor;
		D2D1_Fcolor(&WhiteColor, D2D1ColorF_White, 1.0);
		this->m_pRT->lpVtbl->Clear(this->m_pRT, &WhiteColor);

		this->m_pRT->lpVtbl->SetTransform(this->m_pRT, &transform);

		DWRITE_TEXT_METRICS textMetrics;
		this->m_pTextLayout->lpVtbl->GetMetrics(this->m_pTextLayout, &textMetrics);

		if (this->m_renderingMethod == UseA8Target)
		{
			//
			// Offset the destination rect such that the text will be centered
			// on the render target. Given that we have offset the text in the
			// A8 target by the overhang offset, we must factor that into the
			// destination rect now.
			//
			D2D1_SIZE_F opacityRTSize;
			this->m_pOpacityRT->lpVtbl->GetSize(this->m_pOpacityRT, &opacityRTSize);
			D2D1_POINT_2F offset =  {
										-textMetrics.width / 2.0f - this->m_overhangOffset.x,
										-textMetrics.height / 2.0f - this->m_overhangOffset.y
									};

			//
			// Round the offset to the nearest pixel. Note that the rounding
			// done here is unecessary, but it causes the text to be less
			// blurry.
			//
			FLOAT dpiX;
			FLOAT dpiY;
			this->m_pRT->lpVtbl->GetDpi(this->m_pRT, &dpiX, &dpiY);
			D2D1_POINT_2F roundedOffset =  {
												floor(offset.x * dpiX / 96.0f + 0.5f) * 96.0f / dpiX,
												floor(offset.y * dpiY / 96.0f + 0.5f) * 96.0f / dpiY
											};

			D2D1_RECT_F destinationRect =   {
												roundedOffset.x,
												roundedOffset.y,
												roundedOffset.x + opacityRTSize.width,
												roundedOffset.y + opacityRTSize.height
											};

			ID2D1Bitmap *pBitmap = NULL;
			this->m_pOpacityRT->lpVtbl->GetBitmap(this->m_pOpacityRT, &pBitmap);

			pBitmap->lpVtbl->GetDpi(pBitmap, &dpiX, &dpiY);

			//
			// The antialias mode must be set to D2D1_ANTIALIAS_MODE_ALIASED
			// for this method to succeed. We've set this mode already though
			// so no need to do it again.
			//
			this->m_pRT->lpVtbl->FillOpacityMask(this->m_pRT, pBitmap, (ID2D1Brush *)this->m_pBlackBrush, D2D1_OPACITY_MASK_CONTENT_TEXT_NATURAL, &destinationRect, NULL);

			pBitmap->lpVtbl->Release(pBitmap);
		}
		else
		{
			// Disable pixel snapping to get a smoother animation.
			this->m_pRT->lpVtbl->DrawTextLayout(this->m_pRT, (D2D1_POINT_2F){-textMetrics.width / 2.0f, -textMetrics.height / 2.0f},
												this->m_pTextLayout, (ID2D1Brush *)this->m_pBlackBrush, D2D1_DRAW_TEXT_OPTIONS_NO_SNAP);
		}

		hr = this->m_pRT->lpVtbl->EndDraw(this->m_pRT, NULL, NULL);

		if (hr == D2DERR_RECREATE_TARGET)
		{
			hr = S_OK;
			DiscardDeviceResources(this);
		}
		// To animate as quickly as possible, we request another WM_PAINT immediately.
		InvalidateRect(this->m_hwnd, NULL, FALSE);
	}

	UpdateWindowText(this);

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::OnResize                                              *
 *                                                                 *
 *  If the application receives a WM_SIZE message, this method     *
 *  resizes the render target appropriately.                       *
 *                                                                 *
 ******************************************************************/

void OnResize(DemoApp *this, UINT width, UINT height)
{
	if (this->m_pRT)
	{
		D2D1_SIZE_U size;
		size.width = width;
		size.height = height;

		// Note: This method can fail, but it's okay to ignore the
		// error here -- it will be repeated on the next call to
		// EndDraw.
		this->m_pRT->lpVtbl->Resize(this->m_pRT, &size);
	}
}

/******************************************************************
 *                                                                 *
 *  DemoApp::OnDestroy                                             *
 *                                                                 *
 *  If the application receives a WM_MOVE message, this method     *
 *  takes the appropriate action.                                  *
 *                                                                 *
 ******************************************************************/

void OnDestroy(DemoApp *this)
{
	this->m_fRunning = FALSE;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::WndProc                                               *
 *                                                                 *
 *  Window message handler                                         *
 *                                                                 *
 ******************************************************************/

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LRESULT result = 0;

	if (message == WM_CREATE)
	{
		LPCREATESTRUCT pcs = (LPCREATESTRUCT)lParam;
		DemoApp *pDemoApp = (DemoApp *)pcs->lpCreateParams;

		SetWindowLongPtrW(hwnd, GWLP_USERDATA, PtrToUlong(pDemoApp));

		result = 1;
	}
	else
	{
		DemoApp *pDemoApp = (DemoApp *) ((LONG_PTR) (GetWindowLongPtrW(hwnd, GWLP_USERDATA)));

		BOOL wasHandled = FALSE;

		if (pDemoApp)
		{
			switch (message)
			{
				case WM_SIZE:
				{
					UINT width = LOWORD(lParam);
					UINT height = HIWORD(lParam);
					OnResize(pDemoApp, width, height);
				}
					result = 0;
					wasHandled = TRUE;
					break;

				case WM_CHAR:
				{
					OnChar(pDemoApp, (SHORT) (wParam));
				}
					result = 0;
					wasHandled = TRUE;
					break;

				case WM_PAINT:
				case WM_DISPLAYCHANGE:
				{
					PAINTSTRUCT ps;
					BeginPaint(hwnd, &ps);

					OnRender(pDemoApp);
					EndPaint(hwnd, &ps);
				}
					result = 0;
					wasHandled = TRUE;
					break;

				case WM_DESTROY:
				{
					OnDestroy(pDemoApp);
					PostQuitMessage(0);
				}
					result = 1;
					wasHandled = TRUE;
					break;
			}
		}

		if (!wasHandled)
		{
			result = DefWindowProc(hwnd, message, wParam, lParam);
		}
	}

	return result;
}
