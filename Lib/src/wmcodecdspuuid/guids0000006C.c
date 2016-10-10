// Created file "Lib\src\wmcodecdspuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LOCK_CONSOLE_ON_WAKE, 0x0e796bdb, 0x100d, 0x47d6, 0xa2, 0xd5, 0xf7, 0xd2, 0xda, 0xa5, 0x1f, 0x51);

