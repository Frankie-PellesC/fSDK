// Created file "Lib\src\mfuuid\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFNetVRoot, 0x9c4c3fcd, 0xa6f3, 0x4b43, 0x8e, 0xec, 0xc7, 0xea, 0x60, 0xc5, 0x48, 0x87);

