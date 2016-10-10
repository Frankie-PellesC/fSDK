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

DEFINE_GUID(IID_IActiveScriptParseProcedure2_32, 0x71ee5b20, 0xfb04, 0x11d1, 0xb3, 0xa8, 0x00, 0xa0, 0xc9, 0x11, 0xe8, 0xb2);

