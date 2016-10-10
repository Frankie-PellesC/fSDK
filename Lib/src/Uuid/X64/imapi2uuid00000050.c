// Created file "Lib\src\Uuid\X64\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_FsiNamedStreams, 0xc6b6f8ed, 0x6d19, 0x44b4, 0xb5, 0x39, 0xb1, 0x59, 0xb7, 0x93, 0xa3, 0x2d);

