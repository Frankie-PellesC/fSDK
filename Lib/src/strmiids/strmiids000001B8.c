// Created file "Lib\src\strmiids\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DSATTRIB_CC_CONTAINER_INFO, 0xe7e050fb, 0xdd5d, 0x40dd, 0x99, 0x15, 0x35, 0xdc, 0xb8, 0x1b, 0xdc, 0x8a);

