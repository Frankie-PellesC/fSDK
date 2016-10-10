// Created file "Lib\src\Uuid\i_iebroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CIEDropSourceWrapper, 0x8e989135, 0x2736, 0x4767, 0x81, 0x60, 0xea, 0x36, 0x13, 0xf6, 0x9d, 0x24);

