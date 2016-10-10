// Created file "Lib\src\msxml6\X64\mxr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMXRAttributes, 0x6147fa3b, 0x2790, 0x4069, 0xaa, 0xd8, 0x95, 0x02, 0xfc, 0x4a, 0x14, 0x16);

