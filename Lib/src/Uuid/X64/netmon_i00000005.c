// Created file "Lib\src\Uuid\X64\netmon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IStats, 0x944ad530, 0xb09d, 0x11ce, 0xb5, 0x9c, 0x00, 0xaa, 0x00, 0x6c, 0xb3, 0x7d);

