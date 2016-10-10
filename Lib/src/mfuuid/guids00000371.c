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

DEFINE_GUID(SDPBUILDER_ENABLERTXDUP, 0xdb03f0d6, 0xc1e9, 0x45b3, 0xa6, 0x47, 0x15, 0x9e, 0xd9, 0x5f, 0xe7, 0x93);

