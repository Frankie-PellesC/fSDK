// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Calendar_ShowTimeAs, 0x5bf396d4, 0x5eb2, 0x466f, 0xbd, 0xe9, 0x2f, 0xb3, 0xf2, 0x36, 0x1d, 0x6e);

