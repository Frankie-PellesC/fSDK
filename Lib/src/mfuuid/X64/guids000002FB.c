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

DEFINE_GUID(PKEY_MFASF_STREAM_LEAKYBUCKET1, 0x2b23e4b6, 0x48e5, 0x4163, 0xb2, 0xab, 0xb2, 0xd2, 0x3d, 0x99, 0x1b, 0x9b);

