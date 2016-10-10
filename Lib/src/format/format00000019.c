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

DEFINE_GUID(MetaDataMergerOptions, 0x132d3a6e, 0xb35d, 0x464e, 0x95, 0x1a, 0x42, 0xef, 0xb9, 0xfb, 0x66, 0x01);

