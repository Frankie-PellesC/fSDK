// Created file "Lib\src\mfuuid\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFMcastConfig, 0x6a7beca8, 0xae93, 0x49d8, 0xb3, 0x5a, 0x6b, 0x00, 0x7b, 0xf1, 0x4d, 0x8d);

