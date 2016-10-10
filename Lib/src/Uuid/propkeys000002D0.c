// Created file "Lib\src\Uuid\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_RecordedTV_IsClosedCaptioningAvailable, 0x6d748de2, 0x8d38, 0x4cc3, 0xac, 0x60, 0xf0, 0x09, 0xb0, 0x57, 0xc5, 0x57);

