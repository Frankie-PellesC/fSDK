// Created file "Lib\src\msxml6\X64\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMXReaderControl, 0x808f4e35, 0x8d5a, 0x4fbe, 0x84, 0x66, 0x33, 0xa4, 0x12, 0x79, 0xed, 0x30);

