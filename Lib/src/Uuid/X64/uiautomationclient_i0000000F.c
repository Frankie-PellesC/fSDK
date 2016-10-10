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

DEFINE_GUID(IID_IUIAutomationPropertyChangedEventHandler, 0x40cd37d4, 0xc756, 0x4b0c, 0x8c, 0x6f, 0xbd, 0xdf, 0xee, 0xb1, 0x3b, 0x50);

