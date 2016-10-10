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

DEFINE_GUID(GUID_LLTD_PROP_DEVICEUUID, 0xa178c3ec, 0xe13b, 0x4222, 0xb3, 0x7f, 0x68, 0x89, 0xa4, 0xe6, 0x33, 0xb0);

