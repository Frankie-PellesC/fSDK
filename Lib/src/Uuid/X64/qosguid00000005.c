// Created file "Lib\src\Uuid\X64\qosguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_QOS_LATENCY, 0xfc408ef0, 0x40ec, 0x11d1, 0x2c, 0x91, 0x00, 0xaa, 0x00, 0x57, 0x49, 0x15);

