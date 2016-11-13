// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(TID_D3DRMLightAttenuation, 0xa8a98ba0, 0xc5e5, 0x11cf, 0xb9, 0x41, 0x00, 0x80, 0xc8, 0x0c, 0xfa, 0x7b);

