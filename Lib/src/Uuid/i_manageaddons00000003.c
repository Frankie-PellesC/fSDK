// Created file "Lib\src\Uuid\i_manageaddons"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IExtensionItem, 0x37851192, 0x50f0, 0x4a55, 0x92, 0x87, 0xc5, 0xb0, 0xd7, 0x2c, 0x92, 0xd7);

