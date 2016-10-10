// Created file "Lib\src\Uuid\i_urlmon"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBindStatusCallbackEx, 0xaaa74ef9, 0x8ee7, 0x4659, 0x88, 0xd9, 0xf8, 0xc5, 0x04, 0xda, 0x73, 0xcc);

