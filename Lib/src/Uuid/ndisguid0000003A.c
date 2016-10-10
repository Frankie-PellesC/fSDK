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

DEFINE_GUID(GUID_NDIS_GEN_PORT_AUTHENTICATION_PARAMETERS, 0xaab6ac31, 0x86fb, 0x48fb, 0x8b, 0x48, 0x63, 0xdb, 0x23, 0x5a, 0xce, 0x16);

