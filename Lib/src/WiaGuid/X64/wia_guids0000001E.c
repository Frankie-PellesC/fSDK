// Created file "Lib\src\WiaGuid\X64\wia_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WiaLog, 0xa1e75357, 0x881a, 0x419e, 0x83, 0xe2, 0xbb, 0x16, 0xdb, 0x19, 0x7c, 0x68);

