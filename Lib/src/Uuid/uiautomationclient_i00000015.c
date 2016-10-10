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

DEFINE_GUID(IID_IUIAutomationGridPattern, 0x414c3cdc, 0x856b, 0x4f5b, 0x85, 0x38, 0x31, 0x31, 0xc6, 0x30, 0x25, 0x50);

