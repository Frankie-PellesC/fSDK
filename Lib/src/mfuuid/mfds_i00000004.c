// Created file "Lib\src\mfuuid\mfds_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IReaderSetPosition, 0x327e23a0, 0x0396, 0x4844, 0xbe, 0xbe, 0xc2, 0x53, 0xcd, 0x98, 0xa7, 0xf2);

