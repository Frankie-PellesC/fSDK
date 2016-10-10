// Created file "Lib\src\Uuid\X64\i_iextag"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IIntelliForms, 0x9b9f68e6, 0x1aaa, 0x11d2, 0xbc, 0xa5, 0x00, 0xc0, 0x4f, 0xd9, 0x29, 0xdb);

