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

DEFINE_GUID(WPD_EVENT_DEVICE_RESET, 0x7755cf53, 0xc1ed, 0x44f3, 0xb5, 0xa2, 0x45, 0x1e, 0x2c, 0x37, 0x6b, 0x27);

