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

DEFINE_GUID(GUID_PM_GET_PROTOCOL_OFFLOAD, 0xa6435cd9, 0x149f, 0x498e, 0x95, 0x1b, 0x2d, 0x94, 0xbe, 0xa3, 0xe3, 0xa3);

