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

DEFINE_GUID(GUID_NDIS_STATUS_OPER_STATUS, 0xf917b663, 0x845e, 0x4d3d, 0xb6, 0xd4, 0x15, 0xeb, 0x27, 0xaf, 0x81, 0xc5);

