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

DEFINE_GUID(IID_IExtensionObserver, 0xee00a71b, 0x3a6f, 0x400e, 0xb8, 0x29, 0xf2, 0xac, 0xc0, 0x41, 0x56, 0xc9);

