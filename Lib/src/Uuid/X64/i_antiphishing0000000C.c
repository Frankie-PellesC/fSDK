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

DEFINE_GUID(CLSID_AntiPhishingBrowserSolution, 0xe48b2549, 0xd510, 0x4a76, 0x8a, 0x5f, 0xfc, 0x12, 0x6a, 0x62, 0x15, 0xf0);

