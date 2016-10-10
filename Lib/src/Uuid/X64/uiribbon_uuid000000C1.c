// Created file "Lib\src\Uuid\X64\uiribbon_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_UIRibbonImageFromBitmapFactory, 0x0f7434b6, 0x59b6, 0x4250, 0x99, 0x9e, 0xd1, 0x68, 0xd6, 0xae, 0x42, 0x93);

