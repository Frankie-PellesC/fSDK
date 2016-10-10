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

DEFINE_GUID(NETSTREAMSINK_TARGETBUFFERDURATION, 0x1325a899, 0xdf94, 0x4fb1, 0x9c, 0xab, 0x24, 0x43, 0x39, 0x97, 0xf7, 0x18);

