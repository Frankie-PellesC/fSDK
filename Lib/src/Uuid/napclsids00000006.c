// Created file "Lib\src\Uuid\napclsids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NapServerInfo, 0x3b881b82, 0x5bf4, 0x4657, 0xa3, 0xa2, 0xcc, 0xe1, 0x7e, 0x4f, 0xd3, 0x9a);

