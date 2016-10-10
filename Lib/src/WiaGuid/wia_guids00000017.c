// Created file "Lib\src\WiaGuid\wia_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaPreview, 0x95c2b4fd, 0x33f2, 0x4d86, 0xad, 0x40, 0x94, 0x31, 0xf0, 0xdf, 0x08, 0xf7);

