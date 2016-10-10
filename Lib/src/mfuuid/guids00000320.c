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

DEFINE_GUID(MF_PRES_TARGET_ASF_PROFILE, 0x3c834edb, 0xb2a7, 0x4bbb, 0x87, 0xf3, 0xba, 0x7d, 0x45, 0x06, 0x17, 0xfc);

