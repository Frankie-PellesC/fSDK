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

DEFINE_GUID(WPD_EVENT_SERVICE_METHOD_COMPLETE, 0x8a33f5f8, 0x0acc, 0x4d9b, 0x9c, 0xc4, 0x11, 0x2d, 0x35, 0x3b, 0x86, 0xca);

