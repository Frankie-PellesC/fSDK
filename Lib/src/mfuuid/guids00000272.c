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

DEFINE_GUID(MF_CONTAINER_MPEG2_TS_TTS_ZERO, 0x57bd4d85, 0x5a97, 0x4dfc, 0xa0, 0xbf, 0x83, 0x3c, 0x28, 0xc6, 0x44, 0xb7);

