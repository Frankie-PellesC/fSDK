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

DEFINE_GUID(IID_IMFASFContentInfo, 0xb1dca5cd, 0xd5da, 0x4451, 0x8e, 0x9e, 0xdb, 0x5c, 0x59, 0x91, 0x4e, 0xad);

