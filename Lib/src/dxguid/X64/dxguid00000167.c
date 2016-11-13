// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_bcc782bc_6492_4c22_8c35_f5d72fe73c6e, 0xbcc782bc, 0x6492, 0x4c22, 0x8c, 0x35, 0xf5, 0xd7, 0x2f, 0xe7, 0x3c, 0x6e);

