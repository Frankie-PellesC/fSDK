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

DEFINE_GUID(NETMEDIASINK_SAMPLESWITHRTPTIMESTAMPS, 0x34489591, 0x68ad, 0x4482, 0xab, 0x3b, 0x1c, 0x49, 0xc6, 0xc2, 0x5e, 0x5b);

