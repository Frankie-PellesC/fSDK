// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(NETSTREAMSINK_BFRHANDLER, 0x4e7c36ea, 0x3766, 0x4bd0, 0x90, 0x31, 0xfa, 0x1a, 0x36, 0x45, 0x17, 0x16);

