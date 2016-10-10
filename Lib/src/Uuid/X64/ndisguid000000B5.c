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

DEFINE_GUID(GUID_NDIS_STATUS_DOT11_PMKID_CANDIDATE_LIST, 0x26d8b8f6, 0xdb82, 0x49eb, 0x8b, 0xf3, 0x4c, 0x13, 0x0e, 0xf0, 0x69, 0x50);

