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

DEFINE_GUID(MFWMIGUID_AUDIORENDERER_STARVATION_EVENT, 0xdaa05fdd, 0x8072, 0x4d5f, 0x80, 0x33, 0xad, 0x6f, 0x6b, 0x18, 0x34, 0xa5);

