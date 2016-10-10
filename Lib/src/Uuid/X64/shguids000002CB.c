// Created file "Lib\src\Uuid\X64\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISyncMgrUIOperation, 0xfc7cfa47, 0xdfe1, 0x45b5, 0xa0, 0x49, 0x8c, 0xfd, 0x82, 0xbe, 0xc2, 0x71);

