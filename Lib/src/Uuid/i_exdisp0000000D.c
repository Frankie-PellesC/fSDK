// Created file "Lib\src\Uuid\i_exdisp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ShellBrowserWindow, 0xc08afd90, 0xf2a1, 0x11d1, 0x84, 0x55, 0x00, 0xa0, 0xc9, 0x1f, 0x38, 0x80);

