// Created file "Lib\src\Uuid\uiautomationcore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDockProvider, 0x159bc72c, 0x4ad3, 0x485e, 0x96, 0x37, 0xd7, 0x05, 0x2e, 0xdf, 0x01, 0x46);

