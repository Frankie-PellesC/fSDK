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

DEFINE_GUID(MF_ENGINE_PREVIOUS_STATE, 0xf3b4c72f, 0xb3bb, 0x42af, 0xa2, 0x79, 0x24, 0x96, 0x51, 0xa7, 0xb6, 0x4a);

