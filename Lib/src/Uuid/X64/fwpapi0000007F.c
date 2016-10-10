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

DEFINE_GUID(FWPM_CONDITION_IP_PHYSICAL_ARRIVAL_INTERFACE, 0xda50d5c8, 0xfa0d, 0x4c89, 0xb0, 0x32, 0x6e, 0x62, 0x13, 0x6d, 0x1e, 0x96);

