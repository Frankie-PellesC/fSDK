// Created file "Lib\src\Uuid\X64\i_activscp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IActiveScriptSiteUIControl, 0xaedae97e, 0xd7ee, 0x4796, 0xb9, 0x60, 0x7f, 0x09, 0x2a, 0xe8, 0x44, 0xab);

