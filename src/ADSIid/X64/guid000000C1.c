// Created file "Lib\src\ADSIid\X64\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DBPROPSET_ADSIBIND, 0x6da66dc8, 0xb7e8, 0x11d2, 0x9d, 0x60, 0x00, 0xc0, 0x4f, 0x68, 0x93, 0x45);

