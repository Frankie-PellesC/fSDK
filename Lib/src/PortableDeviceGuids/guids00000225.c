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

DEFINE_GUID(WPD_STORAGE_SERIAL_NUMBER, 0x01a3057a, 0x74d6, 0x4e80, 0xbe, 0xa7, 0xdc, 0x4c, 0x21, 0x2c, 0xe5, 0x0a);

