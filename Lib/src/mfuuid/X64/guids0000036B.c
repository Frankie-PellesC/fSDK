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

DEFINE_GUID(MDE_DEFAULT_YUVPROFILE, 0xab8e36ec, 0xa620, 0x4dee, 0x97, 0xc5, 0xbf, 0xa6, 0x44, 0xb5, 0xd2, 0x56);

