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

DEFINE_GUID(MF_MT_AUDIO_PREFER_WAVEFORMATEX, 0xa901aaba, 0xe037, 0x458a, 0xbd, 0xf6, 0x54, 0x5b, 0xe2, 0x07, 0x40, 0x42);

