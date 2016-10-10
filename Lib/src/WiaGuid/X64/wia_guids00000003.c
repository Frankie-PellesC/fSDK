// Created file "Lib\src\WiaGuid\X64\wia_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaDevMgr, 0x5eb2502a, 0x8cf1, 0x11d1, 0xbf, 0x92, 0x00, 0x60, 0x08, 0x1e, 0xd8, 0x11);

