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

DEFINE_GUID(WPD_PROPERTIES_MTP_VENDOR_EXTENDED_DEVICE_PROPS, 0x4d545058, 0x8900, 0x40b3, 0x8f, 0x1d, 0xdc, 0x24, 0x6e, 0x1e, 0x83, 0x70);

