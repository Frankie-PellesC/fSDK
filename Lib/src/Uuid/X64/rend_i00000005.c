// Created file "Lib\src\Uuid\X64\rend_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumDialableAddrs, 0x34621d70, 0x6cff, 0x11d1, 0xaf, 0xf7, 0x00, 0xc0, 0x4f, 0xc3, 0x1f, 0xee);

