// Created file "Lib\src\Uuid\i_subsmgr"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_SubscriptionMgr, 0xc54fd88a, 0xffa1, 0x11d0, 0xbc, 0x5e, 0x00, 0xc0, 0x4f, 0xd9, 0x29, 0xdb);

