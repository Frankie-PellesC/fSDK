// Created file "Lib\src\mfuuid\mfidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFSampleProtection, 0x8e36395f, 0xc7b9, 0x43c4, 0xa5, 0x4d, 0x51, 0x2b, 0x4a, 0xf6, 0x3c, 0x95);

