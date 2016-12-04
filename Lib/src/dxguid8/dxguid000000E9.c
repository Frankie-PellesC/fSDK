// Created file "tmp\src\dxguid\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DPAID_INetW, 0xe63232a0, 0x9dbf, 0x11d0, 0x9c, 0xc1, 0x00, 0xa0, 0xc9, 0x05, 0x42, 0x5e);

