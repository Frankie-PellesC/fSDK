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

DEFINE_GUID(WPD_PROPERTY_COMMON_CLIENT_INFORMATION_CONTEXT, 0xf0422a9c, 0x5dc8, 0x4440, 0xb5, 0xbd, 0x5d, 0xf2, 0x88, 0x35, 0x65, 0x8a);

