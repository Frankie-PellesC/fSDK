// Created file "Lib\src\Uuid\i_activscp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IActiveScriptError64, 0xb21fb2a1, 0x5b8f, 0x4963, 0x8c, 0x21, 0x21, 0x45, 0x0f, 0x84, 0xed, 0x7f);

