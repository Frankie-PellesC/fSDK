// Created file "Lib\src\Uuid\X64\cguid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVCLASS_FSFILTER_CFSMETADATASERVER, 0xcdcf0939, 0xb75b, 0x4630, 0xbf, 0x76, 0x80, 0xf7, 0xba, 0x65, 0x58, 0x84);

