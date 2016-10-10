// Created file "Lib\src\windowscodecs\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WICBmpDecoder, 0x6b462062, 0x7cbf, 0x400d, 0x9f, 0xdb, 0x81, 0x3d, 0xd1, 0x0f, 0x27, 0x78);

