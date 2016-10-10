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

DEFINE_GUID(IID_IMFASFProfile, 0xd267bf6a, 0x028b, 0x4e0d, 0x90, 0x3d, 0x43, 0xf0, 0xef, 0x82, 0xd0, 0xd4);

