// Created file "Lib\src\PortableDeviceGuids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVINTERFACE_WPD, 0x6ac27878, 0xa6fa, 0x4155, 0xba, 0x85, 0xf9, 0x8f, 0x49, 0x1d, 0x4f, 0x33);

