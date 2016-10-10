// Created file "Lib\src\Uuid\X64\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAnimationComposerSiteSink, 0x8ef76c64, 0x71cd, 0x480f, 0x96, 0xfc, 0xba, 0x26, 0x96, 0xe6, 0x59, 0xbe);

