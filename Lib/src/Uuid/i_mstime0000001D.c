// Created file "Lib\src\Uuid\i_mstime"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAnimationComposerSiteFactory, 0xb4ea5681, 0xed72, 0x4efe, 0xbb, 0xd7, 0x7c, 0x47, 0xd1, 0x32, 0x56, 0x96);

