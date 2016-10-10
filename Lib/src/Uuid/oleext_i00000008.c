// Created file "Lib\src\Uuid\oleext_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMultiplePropertyAccess, 0xec81fede, 0xd432, 0x11ce, 0x92, 0x44, 0x00, 0x20, 0xaf, 0x6e, 0x72, 0xdb);

