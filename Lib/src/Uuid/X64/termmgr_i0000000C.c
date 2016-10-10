// Created file "Lib\src\Uuid\X64\termmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_PluggableTerminalRegistration, 0x45234e3e, 0x61cc, 0x4311, 0xa3, 0xab, 0x24, 0x80, 0x82, 0x55, 0x44, 0x82);

