//--------------------------------------------------------------------------------------
// File: Tutorial03.cpp
//
// This application displays a triangle using Direct3D 11
//
// http://msdn.microsoft.com/en-us/library/windows/apps/ff729720.aspx
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//--------------------------------------------------------------------------------------
#define UNICODE
#define WIN32_LEAN_AND_MEAN
#define INITGUID
#include <windows.h>
#include <d3d11_1.h>
#include <d3dcompiler.h>
//#include <directxmath.h>
#include <directxcolors.h>
#include "resource.h"

//--------------------------------------------------------------------------------------
// Structures
//--------------------------------------------------------------------------------------
typedef struct XMFLOAT3
{
  float x;
  float y;
  float z;
}XMFLOAT3;
typedef struct SimpleVertex
{
    XMFLOAT3 Pos;
}SimpleVertex;


//--------------------------------------------------------------------------------------
// Global Variables
//--------------------------------------------------------------------------------------
HINSTANCE               g_hInst = NULL;
HWND                    g_hWnd = NULL;
D3D_DRIVER_TYPE         g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL       g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device*           g_pd3dDevice = NULL;
ID3D11Device1*          g_pd3dDevice1 = NULL;
ID3D11DeviceContext*    g_pImmediateContext = NULL;
ID3D11DeviceContext1*   g_pImmediateContext1 = NULL;
IDXGISwapChain*         g_pSwapChain = NULL;
IDXGISwapChain1*        g_pSwapChain1 = NULL;
ID3D11RenderTargetView* g_pRenderTargetView = NULL;
ID3D11VertexShader*     g_pVertexShader = NULL;
ID3D11PixelShader*      g_pPixelShader = NULL;
ID3D11InputLayout*      g_pVertexLayout = NULL;
ID3D11Buffer*           g_pVertexBuffer = NULL;


//--------------------------------------------------------------------------------------
// Forward declarations
//--------------------------------------------------------------------------------------
HRESULT InitWindow( HINSTANCE hInstance, int nCmdShow );
HRESULT InitDevice(void);
void CleanupDevice(void);
LRESULT CALLBACK WndProc( HWND, UINT, WPARAM, LPARAM );
void Render(void);


//--------------------------------------------------------------------------------------
// Entry point to the program. Initializes everything and goes into a message processing 
// loop. Idle time is used to render the scene.
//--------------------------------------------------------------------------------------
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow )
{
    UNREFERENCED_PARAMETER( hPrevInstance );
    UNREFERENCED_PARAMETER( lpCmdLine );

    if( FAILED( InitWindow( hInstance, nCmdShow ) ) )
        return 0;

    if( FAILED( InitDevice() ) )
    {
        CleanupDevice();
        return 0;
    }

    // Main message loop
    MSG msg = {0};
    while( WM_QUIT != msg.message )
    {
        if( PeekMessage( &msg, NULL, 0, 0, PM_REMOVE ) )
        {
            TranslateMessage( &msg );
            DispatchMessage( &msg );
        }
        else
        {
            Render();
        }
    }

    CleanupDevice();

    return ( int )msg.wParam;
}


//--------------------------------------------------------------------------------------
// Register class and create window
//--------------------------------------------------------------------------------------
HRESULT InitWindow( HINSTANCE hInstance, int nCmdShow )
{
    // Register class
    WNDCLASSEX wcex;
    wcex.cbSize = sizeof( WNDCLASSEX );
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon( hInstance, ( LPCTSTR )IDI_TUTORIAL1 );
    wcex.hCursor = LoadCursor( NULL, IDC_ARROW );
    wcex.hbrBackground = ( HBRUSH )( COLOR_WINDOW + 1 );
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = L"TutorialWindowClass";
    wcex.hIconSm = LoadIcon( wcex.hInstance, ( LPCTSTR )IDI_TUTORIAL1 );
    if( !RegisterClassEx( &wcex ) )
        return E_FAIL;

    // Create window
    g_hInst = hInstance;
    RECT rc = { 0, 0, 800, 600 };
    AdjustWindowRect( &rc, WS_OVERLAPPEDWINDOW, FALSE );
    g_hWnd = CreateWindow( L"TutorialWindowClass", L"Direct3D 11 Tutorial 3: Shaders",
                           WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
                           CW_USEDEFAULT, CW_USEDEFAULT, rc.right - rc.left, rc.bottom - rc.top, NULL, NULL, hInstance,
                           NULL );
    if( !g_hWnd )
        return E_FAIL;

    ShowWindow( g_hWnd, nCmdShow );

    return S_OK;
}


//--------------------------------------------------------------------------------------
// Helper for compiling shaders with D3DCompile
//
// With VS 11, we could load up prebuilt .cso files instead...
//--------------------------------------------------------------------------------------
HRESULT CompileShaderFromFile( WCHAR* szFileName, LPCSTR szEntryPoint, LPCSTR szShaderModel, ID3DBlob** ppBlobOut )
{
    HRESULT hr = S_OK;

    DWORD dwShaderFlags = D3DCOMPILE_ENABLE_STRICTNESS;
#ifdef _DEBUG
    // Set the D3DCOMPILE_DEBUG flag to embed debug information in the shaders.
    // Setting this flag improves the shader debugging experience, but still allows 
    // the shaders to be optimized and to run exactly the way they will run in 
    // the release configuration of this program.
    dwShaderFlags |= D3DCOMPILE_DEBUG;

    // Disable optimizations to further improve shader debugging
    dwShaderFlags |= D3DCOMPILE_SKIP_OPTIMIZATION;
#endif

    ID3DBlob* pErrorBlob = NULL;
    hr = D3DCompileFromFile( szFileName, NULL, NULL, szEntryPoint, szShaderModel, 
        dwShaderFlags, 0, ppBlobOut, &pErrorBlob );
    if( FAILED(hr) )
    {
        if( pErrorBlob )
        {
            OutputDebugStringA( (const char*)( pErrorBlob->lpVtbl->GetBufferPointer(pErrorBlob) ) );
            pErrorBlob->lpVtbl->Release(pErrorBlob);
        }
        return hr;
    }
    if( pErrorBlob ) pErrorBlob->lpVtbl->Release(pErrorBlob);

    return S_OK;
}


//--------------------------------------------------------------------------------------
// Create Direct3D device and swap chain
//--------------------------------------------------------------------------------------
HRESULT InitDevice(void)
{
    HRESULT hr = S_OK;

    RECT rc;
    GetClientRect( g_hWnd, &rc );
    UINT width = rc.right - rc.left;
    UINT height = rc.bottom - rc.top;

    UINT createDeviceFlags = 0;
#ifdef _DEBUG
    createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    D3D_DRIVER_TYPE driverTypes[] =
    {
        D3D_DRIVER_TYPE_HARDWARE,
        D3D_DRIVER_TYPE_WARP,
        D3D_DRIVER_TYPE_REFERENCE,
    };
    UINT numDriverTypes = ARRAYSIZE( driverTypes );

    D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_1,
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
	UINT numFeatureLevels = ARRAYSIZE( featureLevels );

    for( UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++ )
    {
        g_driverType = driverTypes[driverTypeIndex];
        hr = D3D11CreateDevice( NULL, g_driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
                                D3D11_SDK_VERSION, &g_pd3dDevice, &g_featureLevel, &g_pImmediateContext );

        if ( hr == E_INVALIDARG )
        {
            // DirectX 11.0 platforms will not recognize D3D_FEATURE_LEVEL_11_1 so we need to retry without it
            hr = D3D11CreateDevice( NULL, g_driverType, NULL, createDeviceFlags, &featureLevels[1], numFeatureLevels - 1,
                                    D3D11_SDK_VERSION, &g_pd3dDevice, &g_featureLevel, &g_pImmediateContext );
        }

        if( SUCCEEDED( hr ) )
            break;
    }
    if( FAILED( hr ) )
        return hr;

    // Obtain DXGI factory from device (since we used NULL for pAdapter above)
    IDXGIFactory1* dxgiFactory = NULL;
    {
        IDXGIDevice* dxgiDevice = NULL;
        hr = g_pd3dDevice->lpVtbl->QueryInterface(g_pd3dDevice, __uuidof(IDXGIDevice), (void**)&dxgiDevice );
        if (SUCCEEDED(hr))
        {
            IDXGIAdapter* adapter = NULL;
            hr = dxgiDevice->lpVtbl->GetAdapter(dxgiDevice, &adapter);
            if (SUCCEEDED(hr))
            {
                hr = adapter->lpVtbl->GetParent(adapter, __uuidof(IDXGIFactory1), (void**)&dxgiFactory );
                adapter->lpVtbl->Release(adapter);
            }
            dxgiDevice->lpVtbl->Release(dxgiDevice);
        }
    }
    if (FAILED(hr))
        return hr;

    // Create swap chain
    IDXGIFactory2* dxgiFactory2 = NULL;
    hr = dxgiFactory->lpVtbl->QueryInterface(dxgiFactory, __uuidof(IDXGIFactory2), (void**)&dxgiFactory2 );
    if ( dxgiFactory2 )
    {
        // DirectX 11.1 or later
        hr = g_pd3dDevice->lpVtbl->QueryInterface(g_pd3dDevice, __uuidof(ID3D11Device1), (void**)&g_pd3dDevice1 );
        if (SUCCEEDED(hr))
        {
            (void) g_pImmediateContext->lpVtbl->QueryInterface(g_pImmediateContext, __uuidof(ID3D11DeviceContext1), (void**)(&g_pImmediateContext1) );
        }

        DXGI_SWAP_CHAIN_DESC1 sd;
        ZeroMemory(&sd, sizeof(sd));
        sd.Width = width;
        sd.Height = height;
        sd.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.BufferCount = 1;

        hr = dxgiFactory2->lpVtbl->CreateSwapChainForHwnd(dxgiFactory2, (LPUNKNOWN)g_pd3dDevice, g_hWnd, &sd, NULL, NULL, &g_pSwapChain1 );
        if (SUCCEEDED(hr))
        {
            hr = g_pSwapChain1->lpVtbl->QueryInterface(g_pSwapChain1, __uuidof(IDXGISwapChain), (void**)(&g_pSwapChain) );
        }

        dxgiFactory2->lpVtbl->Release(dxgiFactory2);
    }
    else
    {
        // DirectX 11.0 systems
        DXGI_SWAP_CHAIN_DESC sd;
        ZeroMemory(&sd, sizeof(sd));
        sd.BufferCount = 1;
        sd.BufferDesc.Width = width;
        sd.BufferDesc.Height = height;
        sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.BufferDesc.RefreshRate.Numerator = 60;
        sd.BufferDesc.RefreshRate.Denominator = 1;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.OutputWindow = g_hWnd;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.Windowed = TRUE;

        hr = dxgiFactory->lpVtbl->CreateSwapChain( dxgiFactory, (LPUNKNOWN)g_pd3dDevice, &sd, &g_pSwapChain );
    }

    // Note this tutorial doesn't handle full-screen swapchains so we block the ALT+ENTER shortcut
    dxgiFactory->lpVtbl->MakeWindowAssociation( dxgiFactory, g_hWnd, DXGI_MWA_NO_ALT_ENTER );

    dxgiFactory->lpVtbl->Release(dxgiFactory);

    if (FAILED(hr))
        return hr;

    // Create a render target view
    ID3D11Texture2D* pBackBuffer = NULL;
    hr = g_pSwapChain->lpVtbl->GetBuffer( g_pSwapChain, 0, __uuidof( ID3D11Texture2D ), (void**)( &pBackBuffer ) );
    if( FAILED( hr ) )
        return hr;

    hr = g_pd3dDevice->lpVtbl->CreateRenderTargetView( g_pd3dDevice, (ID3D11Resource *)pBackBuffer, NULL, &g_pRenderTargetView );
    pBackBuffer->lpVtbl->Release(pBackBuffer);
    if( FAILED( hr ) )
        return hr;

    g_pImmediateContext->lpVtbl->OMSetRenderTargets( g_pImmediateContext, 1, &g_pRenderTargetView, NULL );

    // Setup the viewport
    D3D11_VIEWPORT vp;
    vp.Width = (FLOAT)width;
    vp.Height = (FLOAT)height;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    vp.TopLeftX = 0;
    vp.TopLeftY = 0;
    g_pImmediateContext->lpVtbl->RSSetViewports( g_pImmediateContext, 1, &vp );

    // Compile the vertex shader
    ID3DBlob* pVSBlob = NULL;
    hr = CompileShaderFromFile( L"Tutorial03.fx", "VS", "vs_4_0", &pVSBlob );
    if( FAILED( hr ) )
    {
        MessageBox( NULL,
                    L"The FX file cannot be compiled.  Please run this executable from the directory that contains the FX file.", L"Error", MB_OK );
        return hr;
    }

	// Create the vertex shader
	hr = g_pd3dDevice->lpVtbl->CreateVertexShader( g_pd3dDevice, pVSBlob->lpVtbl->GetBufferPointer(pVSBlob), pVSBlob->lpVtbl->GetBufferSize(pVSBlob), NULL, &g_pVertexShader );
	if( FAILED( hr ) )
	{	
		pVSBlob->lpVtbl->Release(pVSBlob);
        return hr;
	}

    // Define the input layout
    D3D11_INPUT_ELEMENT_DESC layout[] =
    {
        { "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
    };
	UINT numElements = ARRAYSIZE( layout );

    // Create the input layout
	hr = g_pd3dDevice->lpVtbl->CreateInputLayout( g_pd3dDevice, layout, numElements, pVSBlob->lpVtbl->GetBufferPointer(pVSBlob),
                                          pVSBlob->lpVtbl->GetBufferSize(pVSBlob), &g_pVertexLayout );
	pVSBlob->lpVtbl->Release(pVSBlob);
	if( FAILED( hr ) )
        return hr;

    // Set the input layout
    g_pImmediateContext->lpVtbl->IASetInputLayout( g_pImmediateContext, g_pVertexLayout );

	// Compile the pixel shader
	ID3DBlob* pPSBlob = NULL;
    hr = CompileShaderFromFile( L"Tutorial03.fx", "PS", "ps_4_0", &pPSBlob );
    if( FAILED( hr ) )
    {
        MessageBox( NULL,
                    L"The FX file cannot be compiled.  Please run this executable from the directory that contains the FX file.", L"Error", MB_OK );
        return hr;
    }

	// Create the pixel shader
	hr = g_pd3dDevice->lpVtbl->CreatePixelShader( g_pd3dDevice, pPSBlob->lpVtbl->GetBufferPointer(pPSBlob), pPSBlob->lpVtbl->GetBufferSize(pPSBlob), NULL, &g_pPixelShader );
	pPSBlob->lpVtbl->Release(pPSBlob);
    if( FAILED( hr ) )
        return hr;

    // Create vertex buffer
    SimpleVertex vertices[] =
    {
        { 0.0f, 0.5f, 0.5f },
        { 0.5f, -0.5f, 0.5f },
        { -0.5f, -0.5f, 0.5f },
    };
    D3D11_BUFFER_DESC bd;
	ZeroMemory( &bd, sizeof(bd) );
    bd.Usage = D3D11_USAGE_DEFAULT;
    bd.ByteWidth = sizeof( SimpleVertex ) * 3;
    bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
	bd.CPUAccessFlags = 0;
    D3D11_SUBRESOURCE_DATA InitData;
	ZeroMemory( &InitData, sizeof(InitData) );
    InitData.pSysMem = vertices;
    hr = g_pd3dDevice->lpVtbl->CreateBuffer( g_pd3dDevice, &bd, &InitData, &g_pVertexBuffer );
    if( FAILED( hr ) )
        return hr;

    // Set vertex buffer
    UINT stride = sizeof( SimpleVertex );
    UINT offset = 0;
    g_pImmediateContext->lpVtbl->IASetVertexBuffers( g_pImmediateContext, 0, 1, &g_pVertexBuffer, &stride, &offset );

    // Set primitive topology
    g_pImmediateContext->lpVtbl->IASetPrimitiveTopology( g_pImmediateContext, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST );

    return S_OK;
}


//--------------------------------------------------------------------------------------
// Clean up the objects we've created
//--------------------------------------------------------------------------------------
void CleanupDevice(void)
{
    if( g_pImmediateContext ) g_pImmediateContext->lpVtbl->ClearState(g_pImmediateContext);

    if( g_pVertexBuffer ) g_pVertexBuffer->lpVtbl->Release(g_pVertexBuffer);
    if( g_pVertexLayout ) g_pVertexLayout->lpVtbl->Release(g_pVertexLayout);
    if( g_pVertexShader ) g_pVertexShader->lpVtbl->Release(g_pVertexShader);
    if( g_pPixelShader ) g_pPixelShader->lpVtbl->Release(g_pPixelShader);
    if( g_pRenderTargetView ) g_pRenderTargetView->lpVtbl->Release(g_pRenderTargetView);
    if( g_pSwapChain1 ) g_pSwapChain1->lpVtbl->Release(g_pSwapChain1);
    if( g_pSwapChain ) g_pSwapChain->lpVtbl->Release(g_pSwapChain);
    if( g_pImmediateContext1 ) g_pImmediateContext1->lpVtbl->Release(g_pImmediateContext1);
    if( g_pImmediateContext ) g_pImmediateContext->lpVtbl->Release(g_pImmediateContext);
    if( g_pd3dDevice1 ) g_pd3dDevice1->lpVtbl->Release(g_pd3dDevice1);
    if( g_pd3dDevice ) g_pd3dDevice->lpVtbl->Release(g_pd3dDevice);
}


//--------------------------------------------------------------------------------------
// Called every time the application receives a message
//--------------------------------------------------------------------------------------
LRESULT CALLBACK WndProc( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam )
{
    PAINTSTRUCT ps;
    HDC hdc;

    switch( message )
    {
    case WM_PAINT:
        hdc = BeginPaint( hWnd, &ps );
        EndPaint( hWnd, &ps );
        break;

    case WM_DESTROY:
        PostQuitMessage( 0 );
        break;

        // Note that this tutorial does not handle resizing (WM_SIZE) requests,
        // so we created the window without the resize border.

    default:
        return DefWindowProc( hWnd, message, wParam, lParam );
    }

    return 0;
}


//--------------------------------------------------------------------------------------
// Render a frame
//--------------------------------------------------------------------------------------
void Render(void)
{
    // Clear the back buffer 
    g_pImmediateContext->lpVtbl->ClearRenderTargetView( g_pImmediateContext, g_pRenderTargetView, (const float *)&MidnightBlue );

    // Render a triangle
	g_pImmediateContext->lpVtbl->VSSetShader( g_pImmediateContext, g_pVertexShader, NULL, 0 );
	g_pImmediateContext->lpVtbl->PSSetShader( g_pImmediateContext, g_pPixelShader, NULL, 0 );
    g_pImmediateContext->lpVtbl->Draw( g_pImmediateContext, 3, 0 );

    // Present the information rendered to the back buffer to the front buffer (the screen)
    g_pSwapChain->lpVtbl->Present( g_pSwapChain, 0, 0 );
}
