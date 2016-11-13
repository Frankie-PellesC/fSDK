// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_b1ee676a_d9cd_4d2a_89a8_fa53eb9e480b, 0xb1ee676a, 0xd9cd, 0x4d2a, 0x89, 0xa8, 0xfa, 0x53, 0xeb, 0x9e, 0x48, 0x0b);

