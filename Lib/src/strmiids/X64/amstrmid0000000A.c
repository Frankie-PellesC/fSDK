// Created file "Lib\src\strmiids\X64\amstrmid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_PBDA_GDDS_DATA_TYPE, 0xc80c0df3, 0x6052, 0x4c16, 0x9f, 0x56, 0xc4, 0x4c, 0x21, 0xf7, 0x3c, 0x45);

