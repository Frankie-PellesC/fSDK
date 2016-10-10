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

DEFINE_GUID(PKEY_MDEPROFILE_VIDEO_MAX_PIXELS, 0x324980f9, 0xb4d0, 0x4499, 0xae, 0xde, 0x8a, 0x46, 0x39, 0x84, 0x69, 0xfa);

