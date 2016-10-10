// Created file "Lib\src\Uuid\X64\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITransactionInternal, 0x58dfc7d0, 0x5381, 0x43e5, 0x9d, 0x72, 0x4c, 0xdd, 0xe4, 0xcb, 0x0f, 0x1a);

