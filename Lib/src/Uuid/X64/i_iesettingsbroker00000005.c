// Created file "Lib\src\Uuid\X64\i_iesettingsbroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CSettingsBroker, 0xc6cc0d21, 0x895d, 0x49cc, 0x98, 0xf1, 0xd2, 0x08, 0xcd, 0x71, 0xe0, 0x47);

