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

DEFINE_GUID(CLSID_FeedsArbiterLoRiBroker, 0x34e6abfe, 0xe9f4, 0x4ddf, 0x89, 0x5a, 0x73, 0x50, 0xe1, 0x98, 0xf2, 0x6e);

