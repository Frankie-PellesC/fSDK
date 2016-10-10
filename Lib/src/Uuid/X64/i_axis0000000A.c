// Created file "Lib\src\Uuid\X64\i_axis"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CIeAxiInstallerService, 0x90f18417, 0xf0f1, 0x484e, 0x9d, 0x3c, 0x59, 0xdc, 0xee, 0xe5, 0xdb, 0xd8);

