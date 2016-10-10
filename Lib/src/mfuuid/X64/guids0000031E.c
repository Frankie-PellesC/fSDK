// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFNETSINK_CONFIG_SERVICE, 0xa4e6a90b, 0x0129, 0x4e61, 0xaf, 0xda, 0x8a, 0x9e, 0x91, 0x5e, 0xf2, 0xc7);

