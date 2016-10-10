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

DEFINE_GUID(KSCATEGORY_WDMAUD_USE_PIN_NAME, 0x47a4fa20, 0xa251, 0x11d1, 0xa0, 0x50, 0x00, 0x00, 0xf8, 0x00, 0x47, 0x88);

