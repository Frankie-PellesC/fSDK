// Created file "Lib\src\Uuid\X64\i_privacie"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWebFilterCollection, 0x9df621c3, 0x87c2, 0x447c, 0x9f, 0x34, 0xf1, 0x5d, 0x53, 0x21, 0xd4, 0x23);

