// Created file "Lib\src\Uuid\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBindCallbackInternal, 0x11c81bc2, 0x121e, 0x4ed5, 0xb9, 0xc4, 0xb4, 0x30, 0xbd, 0x54, 0xf2, 0xc0);

