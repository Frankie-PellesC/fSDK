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

DEFINE_GUID(CLSID_FeedsLoriBroker, 0xa7c922a0, 0xa197, 0x4ae4, 0x8f, 0xcd, 0x22, 0x36, 0xbb, 0x4c, 0xf5, 0x15);

