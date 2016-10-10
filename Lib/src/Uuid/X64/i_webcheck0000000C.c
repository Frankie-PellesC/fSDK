// Created file "Lib\src\Uuid\X64\i_webcheck"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CDLAgent, 0x7d559c10, 0x9fe9, 0x11d0, 0x93, 0xf7, 0x00, 0xaa, 0x00, 0x59, 0xce, 0x02);

