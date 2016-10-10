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

DEFINE_GUID(LIBID_AntiPhishingLib, 0xfbb5f85f, 0x2b00, 0x4d91, 0x8d, 0x72, 0x84, 0x3d, 0xbc, 0x0f, 0x0f, 0x4c);

