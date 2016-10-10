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

DEFINE_GUID(MSBBUILDER_ALLOW_CACHING, 0x5c0f0487, 0xb4b4, 0x4323, 0x85, 0xcd, 0x81, 0x6b, 0x80, 0x00, 0xd1, 0x1d);

