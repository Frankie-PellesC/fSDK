// Created file "Lib\src\Uuid\X64\uiautomationcore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRawElementProviderFragmentRoot, 0x620ce2a5, 0xab8f, 0x40a9, 0x86, 0xcb, 0xde, 0x3c, 0x75, 0x59, 0x9b, 0x58);

