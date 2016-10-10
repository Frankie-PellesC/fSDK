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

DEFINE_GUID(IID_IWiaDevMgr2, 0x79c07cf1, 0xcbdd, 0x41ee, 0x8e, 0xc3, 0xf0, 0x00, 0x80, 0xca, 0xda, 0x7a);

