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

DEFINE_GUID(IID_IPerPropertyBrowsing, 0x376bd3aa, 0x3845, 0x101b, 0x84, 0xed, 0x08, 0x00, 0x2b, 0x2e, 0xc7, 0x13);

