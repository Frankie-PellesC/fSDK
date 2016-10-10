// Created file "Lib\src\Svcguid\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDontSupportEventSubscription, 0x784121f1, 0x62a6, 0x4b89, 0x85, 0x5f, 0xd6, 0x5f, 0x29, 0x6d, 0xe8, 0x3a);

