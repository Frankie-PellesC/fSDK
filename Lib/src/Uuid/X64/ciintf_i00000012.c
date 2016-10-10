// Created file "Lib\src\Uuid\X64\ciintf_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICiCScopeEnumerator, 0xcf8505ea, 0x3cca, 0x11d0, 0x8c, 0x90, 0x00, 0x20, 0xaf, 0x1d, 0x74, 0x0e);

