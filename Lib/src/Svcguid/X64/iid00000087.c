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

DEFINE_GUID(IID_ISelectCOMLBServer, 0xdcf443f4, 0x3f8a, 0x4872, 0xb9, 0xf0, 0x36, 0x9a, 0x79, 0x6d, 0x12, 0xd6);

