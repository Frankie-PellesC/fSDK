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

DEFINE_GUID(IID_IWMDRMLicense, 0xc9e0a5f3, 0xdd22, 0x4dc4, 0xb7, 0x95, 0x88, 0xfa, 0x91, 0xf0, 0x51, 0x6b);

