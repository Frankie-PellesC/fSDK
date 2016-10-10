// Created file "Lib\src\Uuid\X64\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_NetFwPublicTypeLib, 0xdb4f3345, 0x3ef8, 0x45ed, 0xb9, 0x76, 0x25, 0xa6, 0xd3, 0xb8, 0x1b, 0x71);

