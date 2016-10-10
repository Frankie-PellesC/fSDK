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

DEFINE_GUID(WPD_PROPERTY_CLASS_EXTENSION_SERVICE_REGISTRATION_RESULTS, 0x7f0779b5, 0xfa2b, 0x4766, 0x9c, 0xb2, 0xf7, 0x3b, 0xa3, 0x0b, 0x67, 0x58);

