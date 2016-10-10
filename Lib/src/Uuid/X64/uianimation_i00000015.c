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

DEFINE_GUID(CLSID_UIAnimationTransitionLibrary, 0x1d6322ad, 0xaa85, 0x4ef5, 0xa8, 0x28, 0x86, 0xd7, 0x10, 0x67, 0xd1, 0x45);

