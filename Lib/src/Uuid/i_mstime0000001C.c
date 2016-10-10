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

DEFINE_GUID(IID_IAnimationComposerFactory, 0xbeeb3233, 0xf71f, 0x4683, 0x8b, 0x05, 0x9a, 0x53, 0x14, 0xc9, 0x7d, 0xbc);

