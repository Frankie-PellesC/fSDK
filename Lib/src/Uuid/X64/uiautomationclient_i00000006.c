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

DEFINE_GUID(IID_IUIAutomationCondition, 0x352ffba8, 0x0973, 0x437c, 0xa6, 0x1f, 0xf6, 0x4c, 0xaf, 0xd8, 0x1d, 0xf9);

