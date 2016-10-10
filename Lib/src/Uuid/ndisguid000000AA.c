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

DEFINE_GUID(GUID_NDIS_STATUS_HD_SPLIT_CURRENT_CONFIG, 0x6c744b0e, 0xee9c, 0x4205, 0x90, 0xa2, 0x01, 0x5f, 0x6d, 0x65, 0xf4, 0x03);

