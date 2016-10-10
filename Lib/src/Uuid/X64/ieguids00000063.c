// Created file "Lib\src\Uuid\X64\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(NOTIFICATIONTYPE_AGENT_INIT, 0x1e4a7390, 0xc70b, 0x11d0, 0x95, 0xf8, 0x00, 0xa0, 0xc9, 0x03, 0x48, 0xec);

