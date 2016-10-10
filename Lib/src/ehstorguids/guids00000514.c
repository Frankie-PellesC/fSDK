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

DEFINE_GUID(PKEY_Music_Mood, 0x56a3372e, 0xce9c, 0x11d2, 0x9f, 0x0e, 0x00, 0x60, 0x97, 0xc6, 0x86, 0xf6);

