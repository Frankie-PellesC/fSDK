// Created file "Lib\src\Uuid\tapi3_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITQueue, 0x5afc3149, 0x4bcc, 0x11d1, 0xbf, 0x80, 0x00, 0x80, 0x5f, 0xc1, 0x47, 0xd3);

