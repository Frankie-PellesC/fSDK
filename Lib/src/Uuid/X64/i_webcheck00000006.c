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

DEFINE_GUID(IID_ISubscriptionAgentShellExt, 0x81b184ba, 0xb302, 0x11d1, 0x85, 0x52, 0x00, 0xc0, 0x4f, 0xa3, 0x5c, 0x89);

