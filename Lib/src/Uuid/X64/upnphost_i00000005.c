// Created file "Lib\src\Uuid\X64\upnphost_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPRegistrar, 0x204810b6, 0x73b2, 0x11d4, 0xbf, 0x42, 0x00, 0xb0, 0xd0, 0x11, 0x8b, 0x56);

