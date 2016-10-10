// Created file "Lib\src\Uuid\X64\i_autodiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_AccountDiscovery, 0x3dab30ed, 0x8132, 0x40bf, 0xa8, 0xba, 0x7b, 0x50, 0x57, 0xf0, 0xcd, 0x10);

