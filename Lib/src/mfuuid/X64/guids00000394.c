// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(NETSTREAMSINK_STATUS_DATAQUEUEDINMS, 0xe4de6da9, 0xcff4, 0x486c, 0xab, 0x50, 0xd8, 0xe8, 0x82, 0x8c, 0xc4, 0x6b);

