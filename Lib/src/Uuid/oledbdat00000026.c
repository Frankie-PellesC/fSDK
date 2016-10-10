// Created file "Lib\src\Uuid\oledbdat"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MDSCHEMA_SETS, 0xa07ccd0b, 0x8148, 0x11d0, 0x87, 0xbb, 0x00, 0xc0, 0x4f, 0xc3, 0x39, 0x42);

