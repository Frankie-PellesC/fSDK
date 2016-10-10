// Created file "Lib\src\Uuid\X64\uianimation_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUIAnimationInterpolator, 0x7815cbba, 0xddf7, 0x478c, 0xa4, 0x6c, 0x7b, 0x6c, 0x73, 0x8b, 0x79, 0x78);

