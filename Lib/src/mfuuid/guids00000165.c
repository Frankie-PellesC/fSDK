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

DEFINE_GUID(MF_SESSION_REMOTE_SOURCE_MODE, 0xf4033ef4, 0x9bb3, 0x4378, 0x94, 0x1f, 0x85, 0xa0, 0x85, 0x6b, 0xc2, 0x44);

