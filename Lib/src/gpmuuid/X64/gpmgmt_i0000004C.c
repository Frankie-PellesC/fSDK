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

DEFINE_GUID(CLSID_GPMStarterGPOCollection, 0x82f8aa8b, 0x49ba, 0x43b2, 0x95, 0x6e, 0x33, 0x97, 0xf9, 0xb9, 0x4c, 0x3a);

