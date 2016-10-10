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

DEFINE_GUID(MFNETCONNECTION_SHAREDDATAPORT, 0x6b2eac79, 0x2932, 0x4c66, 0xa7, 0x41, 0xe5, 0x8a, 0xb1, 0x3c, 0x35, 0x05);

