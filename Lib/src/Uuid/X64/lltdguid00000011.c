// Created file "Lib\src\Uuid\X64\lltdguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LLTD_PROP_LINKSPEED, 0xb8c91d7b, 0x5159, 0x4894, 0xb5, 0x93, 0x34, 0x8f, 0x45, 0x2e, 0x72, 0xa6);

