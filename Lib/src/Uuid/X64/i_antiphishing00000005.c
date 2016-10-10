// Created file "Lib\src\Uuid\X64\i_antiphishing"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAntiPhishingBrowserSolution, 0x8285213e, 0x702b, 0x40fb, 0x80, 0xec, 0x96, 0x99, 0xfd, 0x3d, 0x09, 0x25);

