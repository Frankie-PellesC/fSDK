// Created file "Lib\src\mfuuid\wmdrmsdk_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWMDRMProvider, 0x98dc8917, 0x8640, 0x4b1d, 0x9f, 0x1e, 0xa5, 0x90, 0xd4, 0x03, 0x57, 0xee);

