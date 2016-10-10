// Created file "Lib\src\windowscodecs\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(D3DAUTHENTICATEDCONFIGURE_CRYPTOSESSION, 0x6346cc54, 0x2cfc, 0x4ad4, 0x82, 0x24, 0xd1, 0x58, 0x37, 0xde, 0x77, 0x00);

