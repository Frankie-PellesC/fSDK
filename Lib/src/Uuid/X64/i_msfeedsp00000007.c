// Created file "Lib\src\Uuid\X64\i_msfeedsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFeedBindInfo, 0xb7cbe7d2, 0x1e0b, 0x418b, 0xa1, 0xe4, 0x25, 0xce, 0x41, 0xf7, 0x5f, 0x05);

