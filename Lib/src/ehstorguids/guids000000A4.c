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

DEFINE_GUID(WPD_CONTENT_TYPE_GENERIC_MESSAGE, 0xe80eaaf8, 0xb2db, 0x4133, 0xb6, 0x7e, 0x1b, 0xef, 0x4b, 0x4a, 0x6e, 0x5f);

