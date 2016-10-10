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

DEFINE_GUID(SID_SCommDlgBrowser, 0x80f30233, 0xb7df, 0x11d2, 0xa3, 0x3b, 0x00, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

