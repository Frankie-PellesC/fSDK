//-----------------------------------------------------------------------------
//           Name: dx9_alpha_blending_texture.cpp
//         Author: Kevin Harris
//  Last Modified: 03/27/05
//    Description: This sample demonstrates how to perform alpha blending using
//                 the alpha channel of a standard .tga texture. For proper
//                 alpha blending, the sample uses a cull-mode sorting trick
//                 to ensure the sides of the textured cube get rendered in
//                 back-to-front order.
//
//   Control Keys: b - Toggle blending
//                 s - Toggle usage of cull-mode sorting trick
//                 Up Arrow - Move the test cube closer
//                 Down Arrow - Move the test cube away
//-----------------------------------------------------------------------------

#define STRICT
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <stdbool.h>
#include "resource.h"

//-----------------------------------------------------------------------------
// GLOBALS
//-----------------------------------------------------------------------------
HWND                    g_hWnd          = NULL;
LPDIRECT3D9             g_pD3D          = NULL;
LPDIRECT3DDEVICE9       g_pd3dDevice    = NULL;
LPDIRECT3DVERTEXBUFFER9 g_pVertexBuffer = NULL;
LPDIRECT3DTEXTURE9      g_pTexture      = NULL;

bool g_bBlending = true;
bool g_bSortUsingCullModeTrick = true;

float g_fDistance = 4.5f;
float g_fSpinX    = 0.0f;
float g_fSpinY    = 0.0f;

typedef struct _Vertex
{
    float x, y, z;
    float tu, tv;
    
    //enum FVF
    //{
    //    FVF_Flags = D3DFVF_XYZ | D3DFVF_TEX1
    //};
} Vertex;

#define D3DFVF_CUSTOMVERTEX (D3DFVF_XYZ|D3DFVF_TEX1)

Vertex g_cubeVertices[] =
{
	{-1.0f, 1.0f,-1.0f,  0.0f,0.0f },
	{ 1.0f, 1.0f,-1.0f,  1.0f,0.0f },
	{-1.0f,-1.0f,-1.0f,  0.0f,1.0f },
	{ 1.0f,-1.0f,-1.0f,  1.0f,1.0f },
	
	{-1.0f, 1.0f, 1.0f,  1.0f,0.0f },
	{-1.0f,-1.0f, 1.0f,  1.0f,1.0f },
	{ 1.0f, 1.0f, 1.0f,  0.0f,0.0f },
	{ 1.0f,-1.0f, 1.0f,  0.0f,1.0f },
	
	{-1.0f, 1.0f, 1.0f,  0.0f,0.0f },
	{ 1.0f, 1.0f, 1.0f,  1.0f,0.0f },
	{-1.0f, 1.0f,-1.0f,  0.0f,1.0f },
	{ 1.0f, 1.0f,-1.0f,  1.0f,1.0f },
	
	{-1.0f,-1.0f, 1.0f,  0.0f,1.0f },
	{-1.0f,-1.0f,-1.0f,  0.0f,0.0f },
	{ 1.0f,-1.0f, 1.0f,  1.0f,1.0f },
	{ 1.0f,-1.0f,-1.0f,  1.0f,0.0f },

	{ 1.0f, 1.0f,-1.0f,  0.0f,0.0f },
	{ 1.0f, 1.0f, 1.0f,  1.0f,0.0f },
	{ 1.0f,-1.0f,-1.0f,  0.0f,1.0f },
	{ 1.0f,-1.0f, 1.0f,  1.0f,1.0f },
	
	{-1.0f, 1.0f,-1.0f,  1.0f,0.0f },
	{-1.0f,-1.0f,-1.0f,  1.0f,1.0f },
	{-1.0f, 1.0f, 1.0f,  0.0f,0.0f },
	{-1.0f,-1.0f, 1.0f,  0.0f,1.0f }
};

//-----------------------------------------------------------------------------
// PROTOTYPES
//-----------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
				   LPSTR lpCmdLine, int nCmdShow);
LRESULT CALLBACK WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
void loadTexture(void);
void init(void);
void shutDown(void);
void render(void);

//-----------------------------------------------------------------------------
// Name: WinMain()
// Desc: The application's entry point
//-----------------------------------------------------------------------------
int WINAPI WinMain(	HINSTANCE hInstance,
					HINSTANCE hPrevInstance,
					LPSTR     lpCmdLine,
					int       nCmdShow )
{
	WNDCLASSEX winClass; 
	MSG        uMsg;

    memset(&uMsg,0,sizeof(uMsg));
    
	winClass.lpszClassName = "MY_WINDOWS_CLASS";
	winClass.cbSize        = sizeof(WNDCLASSEX);
	winClass.style         = CS_HREDRAW | CS_VREDRAW;
	winClass.lpfnWndProc   = WindowProc;
	winClass.hInstance     = hInstance;
	winClass.hIcon	       = LoadIcon(hInstance, (LPCTSTR)IDI_DIRECTX_ICON);
    winClass.hIconSm	   = LoadIcon(hInstance, (LPCTSTR)IDI_DIRECTX_ICON);
	winClass.hCursor       = LoadCursor(NULL, IDC_ARROW);
	winClass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	winClass.lpszMenuName  = NULL;
	winClass.cbClsExtra    = 0;
	winClass.cbWndExtra    = 0;

	if( !RegisterClassEx(&winClass) )
		return E_FAIL;

	g_hWnd = CreateWindowEx( (unsigned long int)NULL, "MY_WINDOWS_CLASS", 
                             "Direct3D (DX9) - Texture Alpha Blending",
						     WS_OVERLAPPEDWINDOW | WS_VISIBLE,
					         0, 0, 640, 480, NULL, NULL, hInstance, NULL );

	if( g_hWnd == NULL )
		return E_FAIL;

    ShowWindow( g_hWnd, nCmdShow );
    UpdateWindow( g_hWnd );

	init();

	while( uMsg.message != WM_QUIT )
	{
		if( PeekMessage( &uMsg, NULL, 0, 0, PM_REMOVE ) )
		{ 
			TranslateMessage( &uMsg );
			DispatchMessage( &uMsg );
		}
        else
            render();
	}

	shutDown();

    UnregisterClass( "MY_WINDOWS_CLASS", winClass.hInstance );

	return uMsg.wParam;
}

//-----------------------------------------------------------------------------
// Name: WindowProc()
// Desc: The window's message handler
//-----------------------------------------------------------------------------
LRESULT CALLBACK WindowProc( HWND   hWnd, 
							 UINT   msg, 
							 WPARAM wParam, 
							 LPARAM lParam )
{
    static POINT ptLastMousePosit;
	static POINT ptCurrentMousePosit;
	static bool bMousing;
	
    switch( msg )
	{	
        case WM_CHAR:
		{
			switch( wParam )
			{
                case 'b':
                case 'B':
                    g_bBlending = !g_bBlending;
                    break;

                case 's':
                case 'S':
                    g_bSortUsingCullModeTrick = !g_bSortUsingCullModeTrick;
                    break;
            }
        }
        break;

        case WM_KEYDOWN:
		{
			switch( wParam )
			{
				case VK_ESCAPE:
					PostQuitMessage(0);
					break;

                case 38: // Up Arrow Key
                    g_fDistance -= 0.1f;
                    break;

                case 40: // Down Arrow Key
                    g_fDistance += 0.1f;
                    break;
			}
		}
        break;

        case WM_LBUTTONDOWN:
		{
			ptLastMousePosit.x = ptCurrentMousePosit.x = LOWORD (lParam);
            ptLastMousePosit.y = ptCurrentMousePosit.y = HIWORD (lParam);
			bMousing = true;
		}
		break;

		case WM_LBUTTONUP:
		{
			bMousing = false;
		}
		break;

		case WM_MOUSEMOVE:
		{
			ptCurrentMousePosit.x = LOWORD (lParam);
			ptCurrentMousePosit.y = HIWORD (lParam);

			if( bMousing )
			{
				g_fSpinX -= (ptCurrentMousePosit.x - ptLastMousePosit.x);
				g_fSpinY -= (ptCurrentMousePosit.y - ptLastMousePosit.y);
			}
			
			ptLastMousePosit.x = ptCurrentMousePosit.x;
            ptLastMousePosit.y = ptCurrentMousePosit.y;
		}
		break;

		case WM_CLOSE:
		{
			PostQuitMessage(0);	
		}
		break;
		
        case WM_DESTROY:
		{
            PostQuitMessage(0);
		}
        break;

		default:
		{
			return DefWindowProc( hWnd, msg, wParam, lParam );
		}
		break;
	}

	return 0;
}

//-----------------------------------------------------------------------------
// Name: loadTexture()
// Desc: 
//-----------------------------------------------------------------------------
void loadTexture(void)
{
    D3DXCreateTextureFromFile( g_pd3dDevice, "radiation_box.tga", &g_pTexture );

	g_pd3dDevice->lpVtbl->SetSamplerState(g_pd3dDevice, 0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
	g_pd3dDevice->lpVtbl->SetSamplerState(g_pd3dDevice, 0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
}

//-----------------------------------------------------------------------------
// Name: init()
// Desc: 
//-----------------------------------------------------------------------------
void init( void )
{
    g_pD3D = Direct3DCreate9( D3D_SDK_VERSION );

    D3DDISPLAYMODE d3ddm;

    g_pD3D->lpVtbl->GetAdapterDisplayMode(g_pD3D, D3DADAPTER_DEFAULT, &d3ddm );

    D3DPRESENT_PARAMETERS d3dpp;
    ZeroMemory( &d3dpp, sizeof(d3dpp) );

    d3dpp.Windowed               = TRUE;
    d3dpp.SwapEffect             = D3DSWAPEFFECT_DISCARD;
    d3dpp.BackBufferFormat       = d3ddm.Format;
    d3dpp.EnableAutoDepthStencil = TRUE;
    d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
    d3dpp.PresentationInterval   = D3DPRESENT_INTERVAL_IMMEDIATE;

    g_pD3D->lpVtbl->CreateDevice(g_pD3D, D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, g_hWnd,
                          D3DCREATE_SOFTWARE_VERTEXPROCESSING,
                          &d3dpp, &g_pd3dDevice );

	loadTexture();

	g_pd3dDevice->lpVtbl->CreateVertexBuffer(g_pd3dDevice, 24*sizeof(Vertex),0,D3DFVF_CUSTOMVERTEX ,
                                      D3DPOOL_DEFAULT, &g_pVertexBuffer, NULL );
	void *pVertices = NULL;

    g_pVertexBuffer->lpVtbl->Lock(g_pVertexBuffer, 0, sizeof(g_cubeVertices), (void**)&pVertices, 0 );
    memcpy( pVertices, g_cubeVertices, sizeof(g_cubeVertices) );
    g_pVertexBuffer->lpVtbl->Unlock(g_pVertexBuffer);
	
	g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_LIGHTING, FALSE);
    g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_CULLMODE, D3DCULL_NONE);

    D3DXMATRIX matProj;
    D3DXMatrixPerspectiveFovLH( &matProj, D3DXToRadian( 45.0f ), 
                                640.0f / 480.0f, 0.1f, 100.0f );
    g_pd3dDevice->lpVtbl->SetTransform(g_pd3dDevice, D3DTS_PROJECTION, &matProj );
}

//-----------------------------------------------------------------------------
// Name: shutDown()
// Desc: 
//-----------------------------------------------------------------------------
void shutDown( void )
{
    if( g_pTexture != NULL ) 
        g_pTexture->lpVtbl->Release(g_pTexture);

    if( g_pVertexBuffer != NULL ) 
        g_pVertexBuffer->lpVtbl->Release(g_pVertexBuffer); 

    if( g_pd3dDevice != NULL )
        g_pd3dDevice->lpVtbl->Release(g_pd3dDevice);

    if( g_pD3D != NULL )
        g_pD3D->lpVtbl->Release(g_pD3D);
}

//-----------------------------------------------------------------------------
// Name: render()
// Desc: 
//-----------------------------------------------------------------------------
void render( void )
{
    g_pd3dDevice->lpVtbl->Clear(g_pd3dDevice, 0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER,
                         D3DCOLOR_COLORVALUE(0.35f, 0.53f, 0.7, 1.0f), 1.0f, 0 );

    D3DXMATRIX matWorld;
    D3DXMATRIX matTrans;
	D3DXMATRIX matRot;

    D3DXMatrixTranslation( &matTrans, 0.0f, 0.0f, g_fDistance );

	D3DXMatrixRotationYawPitchRoll( &matRot, 
		                            D3DXToRadian(g_fSpinX), 
		                            D3DXToRadian(g_fSpinY), 
		                            0.0f );
    //matWorld = matRot * matTrans;
	D3DXMatrixMultiply(&matWorld, &matRot, &matTrans);
    g_pd3dDevice->lpVtbl->SetTransform(g_pd3dDevice, D3DTS_WORLD, &matWorld );

    g_pd3dDevice->lpVtbl->BeginScene(g_pd3dDevice);

    //
    // Transparency sorting for our cube...
    //
    // If you have a single transparent object, or multiple transparent objects 
    // which do not overlap in screen space (i.e., each screen pixel is touched 
    // by at most one of the transparent objects), there's a sorting short-cut 
    // which can be used under certain conditions.
    //
    // If your transparent objects are closed, convex, and viewed from the 
    // outside, culling may be used to draw the back-facing polygons prior to 
    // the front-facing polygons. This will accomplish the same thing
    // as sorting your objects or polygons into back-to-front order.
    // Fortunately for us, our cube is a perfect candidate for this sorting 
    // trick.
    // 
    // On the other hand, If we can't use the cull-mode sorting trick, we would 
    // need to sort our objects manually, which would require us to transform 
    // the geometry into eye-space so we could compare their final position 
    // along the z axis. Only then, could we could render them in the proper 
    // back-to-front order for alpha blending.
    //
    // Also, if transparent objects intersect in any way, the individual 
    // triangles of the objects touching will have to be sorted and drawn 
    // individually from back-to-front. And is some rare cases, triangles that 
    // intersect each other may have to be broken into smaller triangles so they
    // no longer intersect or blending artifacts will persist regardless of our
    // sorting efforts.
    //
    // It’s plain to see, transparency sorting can become a big, hairy mess real quick.
    //
    // http://www.opengl.org/resources/tutorials/sig99/advanced99/notes/node204.html
    //
	
    if( g_bBlending == true )
	{
        //
        // Use the texture's alpha channel to blend it with whatever’s already 
        // in the frame-buffer.
        //

        g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_ALPHABLENDENABLE, TRUE );
        g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA );
        g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA );

        g_pd3dDevice->lpVtbl->SetTexture(g_pd3dDevice, 0,(IDirect3DBaseTexture9*)g_pTexture );
        g_pd3dDevice->lpVtbl->SetStreamSource(g_pd3dDevice, 0, g_pVertexBuffer, 0, sizeof(Vertex) );
        g_pd3dDevice->lpVtbl->SetFVF(g_pd3dDevice,D3DFVF_CUSTOMVERTEX );

        if( g_bSortUsingCullModeTrick == true )
	    {
            //
            // Use the cull-mode sorting trick for convex non-overlapping 
            // geometry.
            //

            //
            // Render the cube but only render the back-facing polygons.
            //

            g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_CULLMODE, D3DCULL_CW );

            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  0, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  4, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  8, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 12, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 16, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 20, 2 );

            //
            // Render the cube again, but this time we only render the 
            // front-facing polygons.
            //

            g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_CULLMODE, D3DCULL_CCW );

            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  0, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  4, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  8, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 12, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 16, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 20, 2 );
        }
        else
        {
            //
            // Do no sorting and hope for the best. From certain viewing 
            // positions the cube's sides will appear sorted correctly, but this
            // is typically rare and the cube will not look right most of the 
            // time.
            //

            g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_CULLMODE, D3DCULL_NONE);

            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  0, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  4, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  8, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 12, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 16, 2 );
            g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 20, 2 );
        }
	}
	else
	{
        //
        // Render the cube, but do no blending...
        //

		g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_ALPHABLENDENABLE, FALSE);
		g_pd3dDevice->lpVtbl->SetRenderState(g_pd3dDevice, D3DRS_ZENABLE, TRUE);

        g_pd3dDevice->lpVtbl->SetTexture(g_pd3dDevice, 0, (IDirect3DBaseTexture9*)g_pTexture );
        g_pd3dDevice->lpVtbl->SetStreamSource(g_pd3dDevice, 0, g_pVertexBuffer, 0, sizeof(Vertex) );
        g_pd3dDevice->lpVtbl->SetFVF(g_pd3dDevice, D3DFVF_CUSTOMVERTEX );

        g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  0, 2 );
        g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  4, 2 );
        g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP,  8, 2 );
        g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 12, 2 );
        g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 16, 2 );
        g_pd3dDevice->lpVtbl->DrawPrimitive(g_pd3dDevice, D3DPT_TRIANGLESTRIP, 20, 2 );
	}

    g_pd3dDevice->lpVtbl->EndScene(g_pd3dDevice);
    g_pd3dDevice->lpVtbl->Present(g_pd3dDevice, NULL, NULL, NULL, NULL );
}
