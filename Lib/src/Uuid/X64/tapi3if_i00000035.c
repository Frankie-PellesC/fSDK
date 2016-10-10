// Created file "Lib\src\Uuid\X64\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITTAPIEventNotification, 0xeddb9426, 0x3b91, 0x11d1, 0x8f, 0x30, 0x00, 0xc0, 0x4f, 0xb6, 0x80, 0x9f);

