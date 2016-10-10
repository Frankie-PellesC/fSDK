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

DEFINE_GUID(MF_PRES_TARGET_ASF_HEADER, 0x51d9241e, 0xc3fa, 0x4e6d, 0x88, 0x4b, 0xd2, 0xa1, 0xae, 0x45, 0x73, 0x9c);

