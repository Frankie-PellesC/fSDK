// Created file "Lib\src\MMC\X64\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ScopeNamespace, 0xebbb48dc, 0x1a3b, 0x4d86, 0xb7, 0x86, 0xc2, 0x1b, 0x28, 0x38, 0x90, 0x12);

