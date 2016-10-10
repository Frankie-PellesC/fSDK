// Created file "Lib\src\Uuid\X64\oleacc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CAccPropServices, 0xb5f8350b, 0x0548, 0x48b1, 0xa6, 0xee, 0x88, 0xbd, 0x00, 0xb4, 0xa5, 0xe7);

