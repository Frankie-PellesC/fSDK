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

DEFINE_GUID(CLSID_UIAnimationTransitionFactory, 0x8a9b1cdd, 0xfcd7, 0x419c, 0x8b, 0x44, 0x42, 0xfd, 0x17, 0xdb, 0x18, 0x87);

