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

DEFINE_GUID(IID_IWiaNotifyDevMgr, 0x70681ea0, 0xe7bf, 0x4291, 0x9f, 0xb1, 0x4e, 0x88, 0x13, 0xa3, 0xf7, 0x8e);

