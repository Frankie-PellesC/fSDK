// Created file "Lib\src\WiaGuid\X64\wiamindr_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaMiniDrvTransferCallback, 0xa9d2ee89, 0x2ce5, 0x4ff0, 0x8a, 0xdb, 0xc9, 0x61, 0xd1, 0xd7, 0x74, 0xca);

