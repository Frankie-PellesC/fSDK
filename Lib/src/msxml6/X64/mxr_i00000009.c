// Created file "Lib\src\msxml6\X64\mxr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MXXMLReader50, 0xf59f6866, 0xd6ab, 0x452a, 0xb6, 0xb0, 0x7a, 0x25, 0xc9, 0x75, 0x38, 0xf2);

