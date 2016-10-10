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

DEFINE_GUID(MF_TRANSCODE_ADJUST_PROFILE, 0x9c37c21b, 0x060f, 0x487c, 0xa6, 0x90, 0x80, 0xd7, 0xf5, 0x0d, 0x1c, 0x72);

