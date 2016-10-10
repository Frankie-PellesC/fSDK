// Created file "Lib\src\Uuid\X64\lltdmapper_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILLTDMapper, 0x2fa7433a, 0x62e8, 0x4a41, 0x92, 0x1b, 0x3d, 0xcc, 0xc6, 0xa7, 0x63, 0xa6);

