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

DEFINE_GUID(WPD_CATEGORY_DEVICE_HINTS, 0x0d5fb92b, 0xcb46, 0x4c4f, 0x83, 0x43, 0x0b, 0xc3, 0xd3, 0xf1, 0x7c, 0x84);

