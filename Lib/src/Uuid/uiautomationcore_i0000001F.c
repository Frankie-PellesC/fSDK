// Created file "Lib\src\Uuid\uiautomationcore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IItemContainerProvider, 0xe747770b, 0x39ce, 0x4382, 0xab, 0x30, 0xd8, 0xfb, 0x3f, 0x33, 0x6f, 0x24);

