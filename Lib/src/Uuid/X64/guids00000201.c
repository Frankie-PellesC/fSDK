// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_RESOURCE_AUDIO_CLIP, 0x3bc13982, 0x85b1, 0x48e0, 0x95, 0xa6, 0x8d, 0x3a, 0xd0, 0x6b, 0xe1, 0x17);

