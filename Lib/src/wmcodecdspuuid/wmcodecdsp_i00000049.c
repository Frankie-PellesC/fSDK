// Created file "Lib\src\wmcodecdspuuid\wmcodecdsp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CFrameRateConvertDmo, 0x01f36ce2, 0x0907, 0x4d8b, 0x97, 0x9d, 0xf1, 0x51, 0xbe, 0x91, 0xc8, 0x83);

