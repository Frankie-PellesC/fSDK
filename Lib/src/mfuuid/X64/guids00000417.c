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

DEFINE_GUID(MFTRANSFORM_MULTI_CHANNEL_AUDIO, 0x82b88c94, 0x367d, 0x408f, 0x8c, 0x09, 0x5b, 0x38, 0x0c, 0x87, 0xe1, 0xb5);

