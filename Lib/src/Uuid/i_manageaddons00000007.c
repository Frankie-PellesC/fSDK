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

DEFINE_GUID(IID_IExtensionManager, 0x4cc5fb25, 0x1db9, 0x4c5a, 0xb3, 0x73, 0xe2, 0x2d, 0x73, 0xd2, 0xe7, 0xc5);

