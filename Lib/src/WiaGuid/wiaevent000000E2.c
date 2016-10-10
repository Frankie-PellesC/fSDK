// Created file "Lib\src\WiaGuid\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WIA_EVENT_HANDLER_NO_ACTION, 0xe0372b7d, 0xe115, 0x4525, 0xbc, 0x55, 0xb6, 0x29, 0xe6, 0x8c, 0x74, 0x5a);

