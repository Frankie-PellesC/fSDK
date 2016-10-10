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

DEFINE_GUID(WPD_FUNCTIONAL_CATEGORY_STILL_IMAGE_CAPTURE, 0x613ca327, 0xab93, 0x4900, 0xb4, 0xfa, 0x89, 0x5b, 0xb5, 0x87, 0x4b, 0x79);

