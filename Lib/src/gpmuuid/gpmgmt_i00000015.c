// Created file "Lib\src\gpmuuid\gpmgmt_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IGPMGPOLinksCollection, 0x189d7b68, 0x16bd, 0x4d0d, 0xa2, 0xec, 0x2e, 0x6a, 0xa2, 0x28, 0x8c, 0x7f);

