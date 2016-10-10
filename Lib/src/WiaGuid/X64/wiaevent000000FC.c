// Created file "Lib\src\WiaGuid\X64\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SlideshowShellExtension, 0x5626c32a, 0x2945, 0x4599, 0x8e, 0xb6, 0x16, 0xda, 0xb0, 0xb0, 0x11, 0xb8);

