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

DEFINE_GUID(FWPM_CALLOUT_IPSEC_DOSP_FORWARD_V6, 0x6d08a342, 0xdb9e, 0x4fbe, 0x9e, 0xd2, 0x57, 0x37, 0x4c, 0xe8, 0x9f, 0x79);

