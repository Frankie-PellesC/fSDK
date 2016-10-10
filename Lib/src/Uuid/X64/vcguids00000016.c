// Created file "Lib\src\Uuid\X64\vcguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(COLUMN_PHYSICALSORT, 0xfe284700, 0xd188, 0x11cd, 0xad, 0x48, 0x00, 0xaa, 0x00, 0x3c, 0x9c, 0xb6);

