// Created file "Lib\src\Uuid\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IHttpNegotiate3, 0x57b6c80a, 0x34c2, 0x4602, 0xbc, 0x26, 0x66, 0xa0, 0x2f, 0xc5, 0x71, 0x53);

