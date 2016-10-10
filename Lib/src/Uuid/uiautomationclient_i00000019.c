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

DEFINE_GUID(IID_IUIAutomationScrollPattern, 0x88f4d42a, 0xe881, 0x459d, 0xa7, 0x7c, 0x73, 0xbb, 0xbb, 0x7e, 0x02, 0xdc);

