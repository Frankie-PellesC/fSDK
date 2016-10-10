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

DEFINE_GUID(WPD_FUNCTIONAL_CATEGORY_SMS, 0x0044a0b1, 0xc1e9, 0x4afd, 0xb3, 0x58, 0xa6, 0x2c, 0x61, 0x17, 0xc9, 0xcf);

