// Created file "Lib\src\Uuid\X64\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NDIS_NOTIFY_FILTER_ARRIVAL, 0x0b6d3c89, 0x5917, 0x43ca, 0xb5, 0x78, 0xd0, 0x1a, 0x79, 0x67, 0xc4, 0x1c);

