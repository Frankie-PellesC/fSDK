// Created file "Lib\src\Uuid\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_CONDITION_NEXTHOP_INTERFACE_PROFILE_ID, 0xd7ff9a56, 0xcdaa, 0x472b, 0x84, 0xdb, 0xd2, 0x39, 0x63, 0xc1, 0xd1, 0xbf);

