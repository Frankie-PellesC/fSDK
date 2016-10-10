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

DEFINE_GUID(PKEY_MFASF_PROFILE_MAXPACKETSIZE, 0x689dddaa, 0xc4f9, 0x4fd7, 0x81, 0xbd, 0xcf, 0x08, 0x43, 0x96, 0x72, 0xcf);

