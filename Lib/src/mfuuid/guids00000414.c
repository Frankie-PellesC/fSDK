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

DEFINE_GUID(MF_ENGINE_SUSPENSION_REASON, 0x523117f7, 0xf26f, 0x408a, 0xb8, 0xf9, 0xb8, 0x7a, 0x7f, 0x02, 0x9c, 0xc3);

