// Created file "Lib\src\Uuid\simpdata_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_MSDAOSP, 0xe0e270c2, 0xc0be, 0x11d0, 0x8f, 0xe4, 0x00, 0xa0, 0xc9, 0x0a, 0x63, 0x41);

DEFINE_GUID(IID_OLEDBSimpleProviderListener, 0xe0e270c1, 0xc0be, 0x11d0, 0x8f, 0xe4, 0x00, 0xa0, 0xc9, 0x0a, 0x63, 0x41);

DEFINE_GUID(IID_OLEDBSimpleProvider, 0xe0e270c0, 0xc0be, 0x11d0, 0x8f, 0xe4, 0x00, 0xa0, 0xc9, 0x0a, 0x63, 0x41);

