// Created file "Lib\src\Uuid\X64\netcon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NetSharingManager, 0x5c63c1ad, 0x3956, 0x4ff8, 0x84, 0x86, 0x40, 0x03, 0x47, 0x58, 0x31, 0x5b);

