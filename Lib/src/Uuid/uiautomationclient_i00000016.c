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

DEFINE_GUID(IID_IUIAutomationGridItemPattern, 0x78f8ef57, 0x66c3, 0x4e09, 0xbd, 0x7c, 0xe7, 0x9b, 0x20, 0x04, 0x89, 0x4d);

