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

DEFINE_GUID(IID_IUIAutomationWindowPattern, 0x0faef453, 0x9208, 0x43ef, 0xbb, 0xb2, 0x3b, 0x48, 0x51, 0x77, 0x86, 0x4f);

