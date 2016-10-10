// Created file "Lib\src\Uuid\X64\i_exdisp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CScriptErrorList, 0xefd01300, 0x160f, 0x11d2, 0xbb, 0x2e, 0x00, 0x80, 0x5f, 0xf7, 0xef, 0xca);

