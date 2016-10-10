// Created file "Lib\src\ehstorguids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_PropGroup_PhotoAdvanced, 0x0cb2bf5a, 0x9ee7, 0x4a86, 0x82, 0x22, 0xf0, 0x1e, 0x07, 0xfd, 0xad, 0xaf);

