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

DEFINE_GUID(IID_IShellChangeNotify, 0xd82be2b1, 0x5764, 0x11d0, 0xa9, 0x6e, 0x00, 0xc0, 0x4f, 0xd7, 0x05, 0xa2);

