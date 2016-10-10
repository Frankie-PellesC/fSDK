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

DEFINE_GUID(IID_IMFTrustedOutput, 0xd19f8e95, 0xb126, 0x4446, 0x89, 0x0c, 0x5d, 0xcb, 0x7a, 0xd7, 0x14, 0x53);

