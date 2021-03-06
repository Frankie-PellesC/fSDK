// Created file "Lib\src\Uuid\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWinInetCacheHints, 0xdd1ec3b3, 0x8391, 0x4fdb, 0xa9, 0xe6, 0x34, 0x7c, 0x3c, 0xaa, 0xa7, 0xdd);

