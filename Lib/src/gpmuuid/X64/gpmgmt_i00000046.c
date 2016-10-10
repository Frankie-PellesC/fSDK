// Created file "Lib\src\gpmuuid\X64\gpmgmt_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_GPMMapEntry, 0x8c975253, 0x5431, 0x4471, 0xb3, 0x5d, 0x06, 0x26, 0xc9, 0x28, 0x25, 0x8a);

