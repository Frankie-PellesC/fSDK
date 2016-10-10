// Created file "Lib\src\ksuser\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSPROPSETID_Hrtf3d, 0xb66decb0, 0xa083, 0x11d0, 0x85, 0x1e, 0x00, 0xc0, 0x4f, 0xd9, 0xba, 0xf3);

