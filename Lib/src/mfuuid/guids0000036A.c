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

DEFINE_GUID(MDE_DEFAULT_JPEGPROFILE, 0xc756c05f, 0xab2e, 0x4239, 0x99, 0xd5, 0xe0, 0x63, 0x57, 0xcd, 0x8c, 0x36);

