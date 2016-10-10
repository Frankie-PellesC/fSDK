// Created file "Lib\src\WiaGuid\X64\wia_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWIAExtensionHost64, 0xa6bcadf1, 0xdb1e, 0x4f6c, 0x9f, 0xfc, 0xaa, 0x7f, 0x0b, 0x29, 0xe8, 0xee);

