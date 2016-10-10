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

DEFINE_GUID(FWPM_CONDITION_IP_LOCAL_ADDRESS_TYPE, 0x6ec7f6c4, 0x376b, 0x45d7, 0x9e, 0x9c, 0xd3, 0x37, 0xce, 0xdc, 0xd2, 0x37);

