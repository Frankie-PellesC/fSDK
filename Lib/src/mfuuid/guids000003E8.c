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

DEFINE_GUID(PKEY_RTPMCAST_CHANNEL_ANNOUNCEMENT_INTERVAL, 0x1a5b8e8a, 0x7d1d, 0x4dbf, 0x99, 0x83, 0xed, 0x22, 0xd5, 0xb0, 0x2a, 0x57);

