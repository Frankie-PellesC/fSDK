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

DEFINE_GUID(KSCOMPONENTID_USBAUDIO, 0x8f1275f0, 0x26e9, 0x4264, 0xba, 0x4d, 0x39, 0xff, 0xf0, 0x1d, 0x94, 0xaa);

