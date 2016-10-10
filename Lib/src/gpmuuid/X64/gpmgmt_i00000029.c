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

DEFINE_GUID(IID_IGPMGPO2, 0x8a66a210, 0xb78b, 0x4d99, 0x88, 0xe2, 0xc3, 0x06, 0xa8, 0x17, 0xc9, 0x25);

