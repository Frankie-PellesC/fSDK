// Created file "Lib\src\Uuid\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCSessionDescriptionManager, 0xba7f518e, 0xd336, 0x4070, 0x93, 0xa6, 0x86, 0x53, 0x95, 0xc8, 0x43, 0xf9);

