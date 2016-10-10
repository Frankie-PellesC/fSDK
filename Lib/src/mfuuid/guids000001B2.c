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

DEFINE_GUID(MF_AUDIO_RENDERER_ATTRIBUTE_ENDPOINT_ID, 0xb10aaec3, 0xef71, 0x4cc3, 0xb8, 0x73, 0x05, 0xa9, 0xa0, 0x8b, 0x9f, 0x8e);

