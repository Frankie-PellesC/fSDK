// Created file "Lib\src\Uuid\i_msfeedsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFeedRequest, 0xcccf3654, 0xf2c1, 0x405b, 0xb1, 0x67, 0x68, 0x2e, 0x0a, 0x3e, 0x9a, 0x20);

