// Created file "Lib\src\mfuuid\X64\wmdrmsdk_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWMDRMNetReceiver, 0xf9c074a4, 0x15d6, 0x44c0, 0x8a, 0x6d, 0x24, 0x46, 0xac, 0xc1, 0x09, 0xae);

