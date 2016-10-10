// Created file "Lib\src\Uuid\X64\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_CONDITION_ALE_SIO_FIREWALL_SYSTEM_PORT, 0xb9f4e088, 0xcb98, 0x4efb, 0xa2, 0xc7, 0xad, 0x07, 0x33, 0x26, 0x43, 0xdb);

