// Created file "Lib\src\mfuuid\wmcontainer_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFASFStreamConfig, 0x9e8ae8d2, 0xdbbd, 0x4200, 0x9a, 0xca, 0x06, 0xe6, 0xdf, 0x48, 0x49, 0x13);

