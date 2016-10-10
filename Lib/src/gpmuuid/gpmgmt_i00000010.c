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

DEFINE_GUID(IID_IGPMWMIFilterCollection, 0x5782d582, 0x1a36, 0x4661, 0x8a, 0x94, 0xc3, 0xc3, 0x25, 0x51, 0x94, 0x5b);

