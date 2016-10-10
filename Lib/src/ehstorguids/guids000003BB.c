// Created file "Lib\src\ehstorguids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_DateAcquired, 0x2cbaa8f5, 0xd81f, 0x47ca, 0xb1, 0x7a, 0xf8, 0xd8, 0x22, 0x30, 0x01, 0x31);

