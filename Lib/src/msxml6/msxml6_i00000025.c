// Created file "Lib\src\msxml6\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISAXLexicalHandler, 0x7f85d5f5, 0x47a8, 0x4497, 0xbd, 0xa5, 0x84, 0xba, 0x04, 0x81, 0x9e, 0xa6);

