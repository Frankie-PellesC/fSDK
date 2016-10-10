// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeActivate, 0xd882d80b, 0xe7aa, 0x49ed, 0x86, 0xb7, 0xe6, 0xe1, 0xf7, 0x14, 0xcd, 0xfe);

