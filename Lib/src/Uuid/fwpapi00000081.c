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

DEFINE_GUID(FWPM_CONDITION_INTERFACE_QUARANTINE_EPOCH, 0xcce68d5e, 0x053b, 0x43a8, 0x9a, 0x6f, 0x33, 0x38, 0x4c, 0x28, 0xe4, 0xf6);

