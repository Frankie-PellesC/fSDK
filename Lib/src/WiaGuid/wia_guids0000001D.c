// Created file "Lib\src\WiaGuid\wia_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WiaDevMgr2, 0xb6c292bc, 0x7c88, 0x41ee, 0x8b, 0x54, 0x8e, 0xc9, 0x26, 0x17, 0xe5, 0x99);

