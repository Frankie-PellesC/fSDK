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

DEFINE_GUID(IID_IUIAnimationStoryboardEventHandler, 0x3d5c9008, 0xec7c, 0x4364, 0x9f, 0x8a, 0x9a, 0xf3, 0xc5, 0x8c, 0xba, 0xe6);

