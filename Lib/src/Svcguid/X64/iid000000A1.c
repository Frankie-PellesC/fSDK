// Created file "Lib\src\Svcguid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IComMtaThreadPoolKnobs, 0xf9a76d2e, 0x76a5, 0x43eb, 0xa0, 0xc4, 0x49, 0xbe, 0xc8, 0xe4, 0x84, 0x80);

