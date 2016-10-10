// Created file "Lib\src\Uuid\i_activdbg"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IActiveScriptDebug64, 0xbc437e23, 0xf5b8, 0x47f4, 0xbb, 0x79, 0x7d, 0x1c, 0xe5, 0x48, 0x3b, 0x86);

