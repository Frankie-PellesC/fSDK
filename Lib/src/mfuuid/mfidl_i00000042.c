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

DEFINE_GUID(IID_IMFSecureChannel, 0xd0ae555d, 0x3b12, 0x4d97, 0xb0, 0x60, 0x09, 0x90, 0xbc, 0x5a, 0xeb, 0x67);

