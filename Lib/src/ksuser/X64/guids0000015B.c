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

DEFINE_GUID(KSPROPSETID_VBICAP_PROPERTIES, 0xf162c607, 0x7b35, 0x496f, 0xad, 0x7f, 0x2d, 0xca, 0x3b, 0x46, 0xb7, 0x18);

