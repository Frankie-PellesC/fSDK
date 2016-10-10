// Created file "Lib\src\Uuid\X64\i_subsmgr"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISubscriptionMgr2, 0x614bc270, 0xaedf, 0x11d1, 0xa1, 0xf9, 0x00, 0xc0, 0x4f, 0xc2, 0xfb, 0xe1);

