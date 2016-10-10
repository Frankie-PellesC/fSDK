// Created file "Lib\src\Uuid\X64\i_axis"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IeAxiService, 0xe9e92380, 0x9ecd, 0x4982, 0xa0, 0xeb, 0x68, 0x15, 0xa5, 0x6c, 0xcf, 0x27);

