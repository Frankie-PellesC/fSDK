// Created file "Lib\src\shell32\shguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IURLSearchHook2, 0x5ee44da4, 0x6d32, 0x46e3, 0x86, 0xbc, 0x07, 0x54, 0x0d, 0xed, 0xd0, 0xe0);

