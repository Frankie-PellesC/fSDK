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

DEFINE_GUID(CLSID_GPMClientSideExtension, 0xc1a2e70e, 0x659c, 0x4b1a, 0x94, 0x0b, 0xf8, 0x8b, 0x0a, 0xf9, 0xc8, 0xa4);

