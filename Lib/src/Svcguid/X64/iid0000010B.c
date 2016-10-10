// Created file "Lib\src\Svcguid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IComObjectPool2Events, 0x65bf6534, 0x85ea, 0x4f64, 0x8c, 0xf4, 0x3d, 0x97, 0x4b, 0x2a, 0xb1, 0xcf);

