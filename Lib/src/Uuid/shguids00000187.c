// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_OnexPlapSmartcardCredentialProvider, 0x33c86cd6, 0x705f, 0x4ba1, 0x9a, 0xdb, 0x67, 0x07, 0x0b, 0x83, 0x77, 0x75);

