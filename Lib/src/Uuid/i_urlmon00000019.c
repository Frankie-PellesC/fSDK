// Created file "Lib\src\Uuid\i_urlmon"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWinInetCacheHints2, 0x7857aeac, 0xd31f, 0x49bf, 0x88, 0x4e, 0xdd, 0x46, 0xdf, 0x36, 0x78, 0x0a);

