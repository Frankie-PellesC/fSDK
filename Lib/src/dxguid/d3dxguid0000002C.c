// Created file "Lib\src\dxguid\d3dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_SLEEPBUTTON_ACTION_FLAGS, 0x2a160ab1, 0xb69d, 0x4743, 0xb7, 0x18, 0xbf, 0x14, 0x41, 0xd5, 0xe4, 0x93);

