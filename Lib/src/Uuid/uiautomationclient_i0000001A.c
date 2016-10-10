// Created file "Lib\src\Uuid\uiautomationclient_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUIAutomationScrollItemPattern, 0xb488300f, 0xd015, 0x4f19, 0x9c, 0x29, 0xbb, 0x59, 0x5e, 0x36, 0x45, 0xef);

