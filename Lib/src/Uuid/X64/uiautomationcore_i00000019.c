// Created file "Lib\src\Uuid\X64\uiautomationcore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITableItemProvider, 0xb9734fa6, 0x771f, 0x4d78, 0x9c, 0x90, 0x25, 0x17, 0x99, 0x93, 0x49, 0xcd);

