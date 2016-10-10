// Created file "Lib\src\msxml6\mxr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_MXR, 0x36ad7bb8, 0x1f46, 0x46c8, 0xad, 0x3f, 0x6d, 0x0c, 0xf5, 0xf4, 0x70, 0x9c);

