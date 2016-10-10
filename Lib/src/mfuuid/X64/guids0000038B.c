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

DEFINE_GUID(MSBBUILDER_ALLOW_SPLITTING, 0x009896b1, 0x2e54, 0x45ef, 0x83, 0x2a, 0xf4, 0x3c, 0xd9, 0xa8, 0x57, 0xa2);

