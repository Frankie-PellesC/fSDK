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

DEFINE_GUID(IID_IUIAnimationVariable, 0x8ceeb155, 0x2849, 0x4ce5, 0x94, 0x48, 0x91, 0xff, 0x70, 0xe1, 0xe4, 0xd9);

