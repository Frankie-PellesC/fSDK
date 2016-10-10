// Created file "Lib\src\Uuid\adhoc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_ADHOCLib, 0x45357166, 0xff38, 0x4302, 0x8f, 0x5c, 0xdf, 0x5b, 0x70, 0x3a, 0x6e, 0x3d);

