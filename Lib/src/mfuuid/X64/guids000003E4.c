// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_RTPMCAST_CHANNEL_BITRATE_KBPS, 0x18bc0693, 0x721a, 0x48de, 0xb9, 0xbc, 0xee, 0x12, 0x2c, 0x26, 0x45, 0xb6);

