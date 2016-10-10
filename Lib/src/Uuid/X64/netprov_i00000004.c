// Created file "Lib\src\Uuid\X64\netprov_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IProvisioningProfileWireless, 0xc96fbd51, 0x24dd, 0x11d8, 0x89, 0xfb, 0x00, 0x90, 0x4b, 0x2e, 0xa9, 0xc6);

