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

DEFINE_GUID(CLSID_GPMStatusMsgCollection, 0x2824e4be, 0x4bcc, 0x4cac, 0x9e, 0x60, 0x0e, 0x3e, 0xd7, 0xf1, 0x24, 0x96);

