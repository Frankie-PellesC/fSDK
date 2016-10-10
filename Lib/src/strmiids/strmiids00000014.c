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

DEFINE_GUID(MEDIASUBTYPE_ISDB_SUPERIMPOSE, 0x36dc6d28, 0xf1a6, 0x4216, 0x90, 0x48, 0x9c, 0xfc, 0xef, 0xeb, 0x5e, 0xba);

