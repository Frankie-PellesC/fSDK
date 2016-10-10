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

DEFINE_GUID(MFAUDIORENDERSINK_STATISTICS, 0x17f5d1b6, 0x1763, 0x4534, 0xbf, 0x78, 0x5c, 0x15, 0x07, 0x6f, 0xe6, 0x51);

