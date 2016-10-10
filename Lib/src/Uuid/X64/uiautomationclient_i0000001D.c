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

DEFINE_GUID(IID_IUIAutomationSynchronizedInputPattern, 0x2233be0b, 0xafb7, 0x448b, 0x9f, 0xda, 0x3b, 0x37, 0x8a, 0xa5, 0xea, 0xe1);

