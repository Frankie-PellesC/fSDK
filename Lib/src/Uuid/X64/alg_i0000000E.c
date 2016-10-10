// Created file "Lib\src\Uuid\X64\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ApplicationGatewayServices, 0xf8ade1d3, 0x49df, 0x4b75, 0x90, 0x05, 0xef, 0x95, 0x08, 0xe6, 0xa3, 0x37);

