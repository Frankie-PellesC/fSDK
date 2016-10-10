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

DEFINE_GUID(NETSTREAMSINK_NACKHANDLER, 0x8d4c7a97, 0xd7c2, 0x45d1, 0x9a, 0xbb, 0x6e, 0x7c, 0x25, 0x38, 0x7b, 0x25);

