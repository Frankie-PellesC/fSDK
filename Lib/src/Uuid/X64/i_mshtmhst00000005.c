// Created file "Lib\src\Uuid\X64\i_mshtmhst"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDocHostUIHandler, 0xbd3f23c0, 0xd43e, 0x11cf, 0x89, 0x3b, 0x00, 0xaa, 0x00, 0xbd, 0xce, 0x1a);

