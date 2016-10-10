// Created file "Lib\src\mfuuid\rr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRenewalStatusCallback, 0x496bca77, 0xfea8, 0x40b7, 0xbe, 0x65, 0x90, 0xd9, 0x50, 0x2c, 0x45, 0xfe);

