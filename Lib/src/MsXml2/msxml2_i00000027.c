// Created file "Lib\src\MsXml2\msxml2_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISAXAttributes, 0xf078abe1, 0x45d2, 0x4832, 0x91, 0xea, 0x44, 0x66, 0xce, 0x2f, 0x25, 0xc9);

