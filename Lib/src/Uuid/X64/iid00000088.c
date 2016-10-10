// Created file "Lib\src\Uuid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICOMLBArguments, 0x3a0f150f, 0x8ee5, 0x4b94, 0xb4, 0x0e, 0xae, 0xf2, 0xf9, 0xe4, 0x2e, 0xd2);

