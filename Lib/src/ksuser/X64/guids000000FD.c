// Created file "Lib\src\ksuser\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSAUDFNAME_MICROPHONE_BOOST, 0x2bc31d6a, 0x96e3, 0x11d2, 0xac, 0x4c, 0x00, 0xc0, 0x4f, 0x8e, 0xfb, 0x68);

