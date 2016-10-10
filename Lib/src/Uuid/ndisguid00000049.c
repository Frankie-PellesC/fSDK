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

DEFINE_GUID(GUID_PM_REMOVE_PROTOCOL_OFFLOAD, 0xdecd7be2, 0xa6b0, 0x43ca, 0xae, 0x45, 0xd0, 0x00, 0xd2, 0x0e, 0x52, 0x65);

