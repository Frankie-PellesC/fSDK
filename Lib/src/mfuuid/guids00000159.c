// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFT_PREFERRED_OUTPUTTYPE_Attribute, 0x7e700499, 0x396a, 0x49ee, 0xb1, 0xb4, 0xf6, 0x28, 0x02, 0x1e, 0x8c, 0x9d);

