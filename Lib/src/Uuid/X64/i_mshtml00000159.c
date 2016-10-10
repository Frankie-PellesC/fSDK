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

DEFINE_GUID(CLSID_HTMLNavigator, 0xfeceaaa6, 0x8405, 0x11cf, 0x8b, 0xa1, 0x00, 0xaa, 0x00, 0x47, 0x6d, 0xa6);

