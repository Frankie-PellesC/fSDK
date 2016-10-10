// Created file "Lib\src\Uuid\X64\i_activdbg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDebugDocumentHelper32, 0x51973c26, 0xcb0c, 0x11d0, 0xb5, 0xc9, 0x00, 0xa0, 0x24, 0x4a, 0x0e, 0x7a);

