// Created file "Lib\src\mfuuid\X64\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFGetMultipleServiceProviders, 0x6ca60d7e, 0xe98d, 0x4c2d, 0xb2, 0x5e, 0xd4, 0xb7, 0xcf, 0x39, 0x41, 0x85);

