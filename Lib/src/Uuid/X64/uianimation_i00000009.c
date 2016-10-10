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

DEFINE_GUID(IID_IUIAnimationVariableIntegerChangeHandler, 0xbb3e1550, 0x356e, 0x44b0, 0x99, 0xda, 0x85, 0xac, 0x60, 0x17, 0x86, 0x5e);

