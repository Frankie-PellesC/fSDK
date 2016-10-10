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

DEFINE_GUID(GUID_LLTD_PROP_BSSID, 0xba55dcc5, 0x8759, 0x4d08, 0x98, 0x72, 0x61, 0xe9, 0x3e, 0x68, 0x5f, 0x75);

