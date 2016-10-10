// Created file "Lib\src\strmiids\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_IVideoEncoderCodecAPIProxy, 0xb05dabd9, 0x56e5, 0x4fdc, 0xaf, 0xa4, 0x8a, 0x47, 0xe9, 0x1f, 0x1c, 0x9c);

