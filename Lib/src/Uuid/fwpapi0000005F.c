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

DEFINE_GUID(FWPM_CONDITION_ETHER_DESTINATION_ADDRESS, 0xd999e981, 0x7948, 0x4c83, 0xb7, 0x42, 0xc8, 0x4e, 0x3b, 0x67, 0x8f, 0x8f);

