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

DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeDelete, 0xf76c3397, 0xafb3, 0x45d7, 0xa5, 0x9f, 0x5a, 0x49, 0xe9, 0x05, 0x43, 0x7e);

