// Created file "Lib\src\msdasc\X64\msdasc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_RootBinder, 0xff151822, 0xb0bf, 0x11d1, 0xa8, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);

