// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_PROPERTY_SERVICE_CAPABILITIES_EVENT, 0x24457e74, 0x2e9f, 0x44f9, 0x8c, 0x57, 0x1d, 0x1b, 0xcb, 0x17, 0x0b, 0x89);

