// Created file "Lib\src\Uuid\objidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IReleaseMarshalBuffers, 0xeb0cb9e8, 0x7996, 0x11d2, 0x87, 0x2e, 0x00, 0x00, 0xf8, 0x08, 0x08, 0x59);

