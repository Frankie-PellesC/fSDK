// Created file "Lib\src\Uuid\X64\i_manageaddons"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ExtensionItem, 0x00d5e447, 0x499e, 0x4dc3, 0x9d, 0x51, 0x98, 0x15, 0x64, 0xa7, 0x8b, 0x08);

