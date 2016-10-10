// Created file "Lib\src\Uuid\X64\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NDIS_802_11_RELOAD_DEFAULTS, 0x748b14e8, 0x32ee, 0x4425, 0xb9, 0x1b, 0xc9, 0x84, 0x8c, 0x58, 0xb5, 0x5a);

