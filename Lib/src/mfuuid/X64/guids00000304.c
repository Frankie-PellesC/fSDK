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

DEFINE_GUID(ME_MEDIA_SOURCE_PAUSED, 0xed280ac6, 0x09b4, 0x46fb, 0xb7, 0x95, 0x1b, 0x6f, 0x83, 0xfa, 0x58, 0xca);

