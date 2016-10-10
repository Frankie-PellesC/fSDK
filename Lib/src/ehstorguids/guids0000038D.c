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

DEFINE_GUID(PKEY_Contact_JA_FirstNamePhonetic, 0x897b3694, 0xfe9e, 0x43e6, 0x80, 0x66, 0x26, 0x0f, 0x59, 0x0c, 0x01, 0x00);

