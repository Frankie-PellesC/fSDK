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

DEFINE_GUID(IID_IGPMClientSideExtension, 0x69da7488, 0xb8db, 0x415e, 0x92, 0x66, 0x90, 0x1b, 0xe4, 0xd4, 0x99, 0x28);

