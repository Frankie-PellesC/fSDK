// Created file "Lib\src\Uuid\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAnimationComposer, 0x5459c83d, 0x322b, 0x44b3, 0x8d, 0xaa, 0x24, 0xc9, 0x47, 0xe7, 0xb2, 0x75);

