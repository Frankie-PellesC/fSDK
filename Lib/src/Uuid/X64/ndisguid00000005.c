// Created file "Lib\src\Uuid\X64\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(UNSPECIFIED_NETWORK_GUID, 0x12ba5bde, 0x143e, 0x4c0d, 0xb6, 0x6d, 0x23, 0x79, 0xbb, 0x14, 0x19, 0x13);

