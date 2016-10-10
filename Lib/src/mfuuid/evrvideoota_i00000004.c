// Created file "Lib\src\mfuuid\evrvideoota_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVideoOTACallback, 0x31fe0815, 0xefdc, 0x4d5e, 0xb5, 0x60, 0x21, 0xab, 0xde, 0x6c, 0x5f, 0x2c);

