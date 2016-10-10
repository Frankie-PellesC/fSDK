// Created file "Lib\src\Uuid\i_iesettingsbroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_IESettingsObjects, 0x40831034, 0xa8ea, 0x481f, 0xbe, 0xc0, 0xcf, 0xab, 0xcc, 0xcb, 0x9d, 0xfd);

