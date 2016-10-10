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

DEFINE_GUID(IID_IActiveScriptStringCompare, 0x58562769, 0xed52, 0x42f7, 0x84, 0x03, 0x49, 0x63, 0x51, 0x4e, 0x1f, 0x11);

