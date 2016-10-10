// Created file "Lib\src\Uuid\X64\i_dxtmsft"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTMatrix, 0xac66a493, 0x0f0c, 0x4c76, 0x82, 0x5c, 0x9d, 0x68, 0xbe, 0xde, 0x91, 0x88);

