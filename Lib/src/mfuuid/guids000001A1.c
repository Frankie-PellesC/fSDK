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

DEFINE_GUID(MF_PD_PREFERRED_LANGUAGE, 0x6c990d3a, 0xbb8e, 0x477a, 0x85, 0x98, 0x0d, 0x5d, 0x96, 0xfc, 0xd8, 0x8a);

