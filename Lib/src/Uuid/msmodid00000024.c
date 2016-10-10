// Created file "Lib\src\Uuid\msmodid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(NPI_MS_FL4T_MODULEID, 0x00000018, 0x0001, 0x0000, 0x1b, 0x4a, 0x00, 0xeb, 0x1a, 0x9b, 0xd4, 0x11);

