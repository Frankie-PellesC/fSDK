// Created file "Lib\src\dxguid\X64\d3d9guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LIDCLOSE_ACTION, 0x5ca83367, 0x6e45, 0x459f, 0xa2, 0x7b, 0x47, 0x6b, 0x1d, 0x01, 0xc9, 0x36);

