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

DEFINE_GUID(SYNCMGR_OBJECTID_QueryBeforeEnable, 0x04cbf7f0, 0x5beb, 0x4de1, 0xbc, 0x90, 0x90, 0x83, 0x45, 0xc4, 0x80, 0xf6);

