// Created file "Lib\src\PortableDeviceGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_CATEGORY_MEDIA_CAPTURE, 0x59b433ba, 0xfe44, 0x4d8d, 0x80, 0x8c, 0x6b, 0xcb, 0x9b, 0x0f, 0x15, 0xe8);

