// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSEVENTSETID_VIDCAPTOSTI, 0xdb47de20, 0xf628, 0x11d1, 0xba, 0x41, 0x00, 0xa0, 0xc9, 0x0d, 0x2b, 0x05);

