// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Communication_FollowupIconIndex, 0x83a6347e, 0x6fe4, 0x4f40, 0xba, 0x9c, 0xc4, 0x86, 0x52, 0x40, 0xd1, 0xf4);

