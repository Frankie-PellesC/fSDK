// Created file "Lib\src\strmiids\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DSATTRIB_CAPTURE_STREAMTIME, 0x0c1a5614, 0x30cd, 0x4f40, 0xbc, 0xbf, 0xd0, 0x3e, 0x52, 0x30, 0x62, 0x07);

