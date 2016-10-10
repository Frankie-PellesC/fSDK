// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_CONTACT_PERSONAL_POSTAL_ADDRESS_COUNTRY, 0xfbd4fdab, 0x987d, 0x4777, 0xb3, 0xf9, 0x72, 0x61, 0x85, 0xa9, 0x31, 0x2b);

