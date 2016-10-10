// Created file "Lib\src\Shell32\X64\shguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MenuBandSite, 0xe13ef4e4, 0xd2f2, 0x11d0, 0x98, 0x16, 0x00, 0xc0, 0x4f, 0xd9, 0x19, 0x72);

