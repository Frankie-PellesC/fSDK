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

DEFINE_GUID(GUID_QOS_FLOW_IP_CONFORMING, 0x07f99a8b, 0xfcd2, 0x11d2, 0xbe, 0x1e, 0x00, 0xa0, 0xc9, 0x9e, 0xe6, 0x3b);

