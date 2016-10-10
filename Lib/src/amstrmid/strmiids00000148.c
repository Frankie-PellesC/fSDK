// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MEDIASUBTYPE_ISDB_SI, 0xe89ad298, 0x3601, 0x4b06, 0xaa, 0xec, 0x9d, 0xde, 0xed, 0xcc, 0x5b, 0xd0);

