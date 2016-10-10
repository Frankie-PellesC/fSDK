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

DEFINE_GUID(WIA_EVENT_CANCEL_IO, 0xc860f7b8, 0x9ccd, 0x41ea, 0xbb, 0xbf, 0x4d, 0xd0, 0x9c, 0x5b, 0x17, 0x95);

