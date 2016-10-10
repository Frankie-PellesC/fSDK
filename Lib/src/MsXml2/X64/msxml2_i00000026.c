// Created file "Lib\src\MsXml2\X64\msxml2_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISAXDeclHandler, 0x862629ac, 0x771a, 0x47b2, 0x83, 0x37, 0x4e, 0x68, 0x43, 0xc1, 0xbe, 0x90);

