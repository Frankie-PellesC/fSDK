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

DEFINE_GUID(KSMUSIC_TECHNOLOGY_SQSYNTH, 0x0ecf4380, 0x62e9, 0x11cf, 0xa5, 0xd6, 0x28, 0xdb, 0x04, 0xc1, 0x00, 0x00);

