// Created file "Lib\src\Uuid\X64\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IInternetZoneManagerEx2, 0xedc17559, 0xdd5d, 0x4846, 0x8e, 0xef, 0x8b, 0xec, 0xba, 0x5a, 0x4a, 0xbf);

