// Created file "Lib\src\Uuid\X64\uiautomationclient_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUIAutomationValuePattern, 0xa94cd8b1, 0x0844, 0x4cd6, 0x9d, 0x2d, 0x64, 0x05, 0x37, 0xab, 0x39, 0xe9);

