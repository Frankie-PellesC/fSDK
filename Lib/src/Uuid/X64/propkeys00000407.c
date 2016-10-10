// Created file "Lib\src\Uuid\X64\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_IsFullText, 0xb6f5c14c, 0x7403, 0x4d1f, 0xb3, 0x0c, 0x91, 0x5c, 0x95, 0xfe, 0x38, 0x46);

