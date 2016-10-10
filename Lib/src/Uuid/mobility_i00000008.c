// Created file "Lib\src\Uuid\mobility_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAvailableNetworkNotifySink, 0x14a82199, 0x97e8, 0x11d9, 0x83, 0x09, 0x00, 0x0d, 0x9d, 0xff, 0x97, 0xd3);

