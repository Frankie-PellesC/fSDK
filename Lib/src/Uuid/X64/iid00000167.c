// Created file "Lib\src\Uuid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITmNodeName, 0x30274f88, 0x6ee4, 0x474e, 0x9b, 0x95, 0x78, 0x07, 0xbc, 0x9e, 0xf8, 0xcf);

