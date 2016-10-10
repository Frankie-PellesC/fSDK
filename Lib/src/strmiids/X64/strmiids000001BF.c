// Created file "Lib\src\strmiids\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(UUID_WMDRMTagTables, 0x5dcd1101, 0x9263, 0x45bb, 0xa4, 0xd5, 0xc4, 0x15, 0xab, 0x8c, 0x58, 0x9c);

