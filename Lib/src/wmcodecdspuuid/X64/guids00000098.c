// Created file "Lib\src\wmcodecdspuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDirectDrawGammaControl, 0x69c11c3e, 0xb46b, 0x11d1, 0xad, 0x7a, 0x00, 0xc0, 0x4f, 0xc2, 0x9b, 0x4e);

