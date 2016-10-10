// Created file "Lib\src\Uuid\upnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_UPnPDescriptionDocument, 0x1d8a9b47, 0x3a28, 0x4ce2, 0x8a, 0x4b, 0xbd, 0x34, 0xe4, 0x5b, 0xce, 0xeb);

