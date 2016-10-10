// Created file "Lib\src\Uuid\i_mshtml"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DIID_HTMLTextContainerEvents, 0x1ff6aa72, 0x5842, 0x11cf, 0xa7, 0x07, 0x00, 0xaa, 0x00, 0xc0, 0x09, 0x8d);

