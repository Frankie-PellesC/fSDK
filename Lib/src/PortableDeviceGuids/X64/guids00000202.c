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

DEFINE_GUID(WPD_CATEGORY_STILL_IMAGE_CAPTURE, 0x4fcd6982, 0x22a2, 0x4b05, 0xa4, 0x8b, 0x62, 0xd3, 0x8b, 0xf2, 0x7b, 0x32);

