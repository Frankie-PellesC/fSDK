// Created file "Lib\src\ehstorguids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_PropGroup_Audio, 0x2804d469, 0x788f, 0x48aa, 0x85, 0x70, 0x71, 0xb9, 0xc1, 0x87, 0xe1, 0x38);

