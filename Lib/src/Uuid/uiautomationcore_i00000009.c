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

DEFINE_GUID(IID_IRawElementProviderHwndOverride, 0x1d5df27c, 0x8947, 0x4425, 0xb8, 0xd9, 0x79, 0x78, 0x7b, 0xb4, 0x60, 0xb8);

