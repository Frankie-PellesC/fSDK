// Created file "Lib\src\format\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MetaDataThreadSafetyOptions, 0xf7559806, 0xf266, 0x42ea, 0x8c, 0x63, 0x0a, 0xdb, 0x45, 0xe8, 0xb2, 0x34);

