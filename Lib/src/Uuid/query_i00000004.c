// Created file "Lib\src\Uuid\query_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRowsetQueryStatus, 0xa7ac77ed, 0xf8d7, 0x11ce, 0xa7, 0x98, 0x00, 0x20, 0xf8, 0x00, 0x80, 0x24);

