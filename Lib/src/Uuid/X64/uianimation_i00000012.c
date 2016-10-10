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

DEFINE_GUID(IID_IUIAnimationTimerEventHandler, 0x274a7dea, 0xd771, 0x4095, 0xab, 0xbd, 0x8d, 0xf7, 0xab, 0xd2, 0x3c, 0xe3);

