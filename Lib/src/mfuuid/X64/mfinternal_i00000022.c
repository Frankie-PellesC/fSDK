// Created file "Lib\src\mfuuid\X64\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFNetBufferControl, 0xd99849fc, 0x41d3, 0x4bbf, 0xaa, 0xcd, 0xff, 0xb9, 0x4e, 0xc4, 0x8c, 0x2b);

