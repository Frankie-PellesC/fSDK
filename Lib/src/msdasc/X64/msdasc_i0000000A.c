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

DEFINE_GUID(CLSID_PDPO, 0xccb4ec60, 0xb9dc, 0x11d1, 0xac, 0x80, 0x00, 0xa0, 0xc9, 0x03, 0x48, 0x73);

