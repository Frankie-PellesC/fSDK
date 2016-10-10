// Created file "Lib\src\Uuid\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_PCC_INTERFACE_STANDARD, 0x37b17e9a, 0xc21c, 0x4296, 0x97, 0x2d, 0x11, 0xc4, 0xb3, 0x2b, 0x28, 0xf0);

