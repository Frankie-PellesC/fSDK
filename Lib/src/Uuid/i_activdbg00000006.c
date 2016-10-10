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

DEFINE_GUID(IID_IActiveScriptSiteDebug64, 0xd6b96b0a, 0x7463, 0x402c, 0x92, 0xac, 0x89, 0x98, 0x42, 0x26, 0x94, 0x2f);

