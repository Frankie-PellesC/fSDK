// Created file "Lib\src\Uuid\X64\i_webcheck"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISubscriptionAgentControl, 0xa89e8ff0, 0x70f4, 0x11d1, 0xbc, 0x7f, 0x00, 0xc0, 0x4f, 0xd9, 0x29, 0xdb);

