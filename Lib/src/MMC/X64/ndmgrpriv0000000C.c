// Created file "Lib\src\MMC\X64\ndmgrpriv"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScopeTreeIter, 0xd779f8d1, 0x6057, 0x11d0, 0xa9, 0x86, 0x00, 0xc0, 0x4f, 0xd8, 0xd5, 0x65);

