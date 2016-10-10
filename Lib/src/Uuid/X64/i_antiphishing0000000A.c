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

DEFINE_GUID(DIID__IAntiPhishingBrowserSolutionEvents, 0x9153c3ba, 0xd311, 0x446c, 0xbb, 0x01, 0xbc, 0x45, 0xcb, 0x77, 0x2c, 0x27);

