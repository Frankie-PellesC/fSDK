// Created file "Lib\src\ehstorguids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_CLASS_EXTENSION_OPTIONS_REGISTER_WPD_PRIVATE_DEVICE_INTERFACE, 0x6309ffef, 0xa87c, 0x4ca7, 0x84, 0x34, 0x79, 0x75, 0x76, 0xe4, 0x0a, 0x96);

