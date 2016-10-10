// Created file "Lib\src\Uuid\X64\i_mshtml"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_HTMLDocument, 0x25336920, 0x03f9, 0x11cf, 0x8f, 0xd0, 0x00, 0xaa, 0x00, 0x68, 0x6f, 0x13);

