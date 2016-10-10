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

DEFINE_GUID(GUID_NDIS_STATUS_DOT11_CONNECTION_COMPLETION, 0x96efd9c9, 0x7f1b, 0x4a89, 0xbc, 0x04, 0x3e, 0x9e, 0x27, 0x17, 0x65, 0xf1);

