// Created file "Lib\src\Uuid\X64\i_dxtrans"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IHTMLDXTransform, 0x30e2ab7d, 0x4fdd, 0x4159, 0xb7, 0xea, 0xdc, 0x72, 0x2b, 0xf4, 0xad, 0xe5);

