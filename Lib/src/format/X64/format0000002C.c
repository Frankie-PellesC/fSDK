// Created file "Lib\src\format\X64\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMetaDataTables, 0xd8f579ab, 0x402d, 0x4b8e, 0x82, 0xd9, 0x5d, 0x63, 0xb1, 0x06, 0x5c, 0x68);

