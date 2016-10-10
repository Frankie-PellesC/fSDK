// Created file "Lib\src\Uuid\uianimation_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUIAnimationTransitionFactory, 0xfcd91e03, 0x3e3b, 0x45ad, 0xbb, 0xb1, 0x6d, 0xfc, 0x81, 0x53, 0x74, 0x3d);

