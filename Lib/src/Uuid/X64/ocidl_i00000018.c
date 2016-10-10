// Created file "Lib\src\Uuid\X64\ocidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPicture2, 0xf5185dd8, 0x2012, 0x4b0b, 0xaa, 0xd9, 0xf0, 0x52, 0xc6, 0xbd, 0x48, 0x2b);

