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

DEFINE_GUID(IID_IUIAnimationStoryboard, 0xa8ff128f, 0x9bf9, 0x4af1, 0x9e, 0x67, 0xe5, 0xe4, 0x10, 0xde, 0xfb, 0x84);

