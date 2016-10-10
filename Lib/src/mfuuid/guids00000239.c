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

DEFINE_GUID(MFOUTPUT_UNCOMPRESSEDDIGITALVIDEO, 0xb7974e47, 0xc88b, 0x45a7, 0x93, 0xb7, 0xe4, 0x6a, 0xd4, 0xb2, 0xbe, 0xb5);

