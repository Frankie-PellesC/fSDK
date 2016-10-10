// Created file "Lib\src\Uuid\X64\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE, 0x146cd41c, 0xdae3, 0x4437, 0x8a, 0xff, 0x2a, 0xf3, 0xf0, 0x38, 0x09, 0x9b);

