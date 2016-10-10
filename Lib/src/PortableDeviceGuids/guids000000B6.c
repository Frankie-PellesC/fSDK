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

DEFINE_GUID(WPD_CONTENT_TYPE_GENERIC_FILE, 0x0085e0a6, 0x8d34, 0x45d7, 0xbc, 0x5c, 0x44, 0x7e, 0x59, 0xc7, 0x3d, 0x48);

