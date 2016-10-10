// Created file "Lib\src\Uuid\scripteddiag_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_ScriptedDiagLibrary, 0x4b21f542, 0x0eb5, 0x4205, 0xa1, 0x2b, 0x59, 0xbf, 0x2f, 0x25, 0x55, 0xfe);

