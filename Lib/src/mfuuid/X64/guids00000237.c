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

DEFINE_GUID(MF_CLOCK_RATE_MATCH_SERVICE, 0xd074e429, 0x3094, 0x4f20, 0xaf, 0x4a, 0xdc, 0x4b, 0xc2, 0x6c, 0x65, 0x00);

