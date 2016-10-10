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

DEFINE_GUID(WPD_EVENT_DEVICE_CAPABILITIES_UPDATED, 0x36885aa1, 0xcd54, 0x4daa, 0xb3, 0xd0, 0xaf, 0xb3, 0xe0, 0x3f, 0x59, 0x99);

