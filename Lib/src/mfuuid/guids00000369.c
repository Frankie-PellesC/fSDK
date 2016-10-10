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

DEFINE_GUID(MDE_DEFAULT_PCMPROFILE, 0x5dcd8b65, 0x451b, 0x4f82, 0x8e, 0x07, 0xd1, 0x1f, 0x09, 0x6b, 0x3f, 0xac);

