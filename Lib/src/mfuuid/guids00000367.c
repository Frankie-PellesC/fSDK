// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MDE_DEFAULT_DOWNLOADPROFILE, 0xa4f2135e, 0xb63a, 0x4ec9, 0xbf, 0x5c, 0x39, 0xfb, 0x32, 0x32, 0x39, 0xd1);

