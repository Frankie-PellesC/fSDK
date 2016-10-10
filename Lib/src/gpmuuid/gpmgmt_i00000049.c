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

DEFINE_GUID(CLSID_GPMStarterGPOBackupCollection, 0xe75ea59d, 0x1aeb, 0x4cb5, 0xa7, 0x8a, 0x28, 0x1d, 0xaa, 0x58, 0x24, 0x06);

