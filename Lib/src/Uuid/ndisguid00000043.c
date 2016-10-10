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

DEFINE_GUID(GUID_PM_PARAMETERS, 0x560245d2, 0xe251, 0x409c, 0xa2, 0x80, 0x31, 0x19, 0x35, 0xbe, 0x3b, 0x28);

