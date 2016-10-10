// Created file "Lib\src\Uuid\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NDIS_HD_SPLIT_PARAMETERS, 0x8c048bea, 0x2913, 0x4458, 0xb6, 0x8e, 0x17, 0xf6, 0xc1, 0xe5, 0xc6, 0x0e);

