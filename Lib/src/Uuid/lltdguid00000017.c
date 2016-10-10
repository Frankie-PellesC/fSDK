// Created file "Lib\src\Uuid\lltdguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LLTD_PROP_RSSI, 0x90c83b96, 0xe9ae, 0x47d6, 0x89, 0xd8, 0xec, 0x62, 0xdc, 0x27, 0x25, 0x8a);

