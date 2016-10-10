// Created file "Lib\src\Uuid\dwm_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDWMCBitmapThis, 0xa6c2852a, 0x805a, 0x481b, 0x9d, 0xed, 0xe1, 0x21, 0x5c, 0x7f, 0xbd, 0xa2);

