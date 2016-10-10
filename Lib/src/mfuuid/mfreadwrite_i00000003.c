// Created file "Lib\src\mfuuid\mfreadwrite_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFReadWriteClassFactory, 0xe7fe2e12, 0x661c, 0x40da, 0x92, 0xf9, 0x4f, 0x00, 0x2a, 0xb6, 0x76, 0x27);

