// Created file "Lib\src\Uuid\X64\i_manageaddons"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IExtensionObservee, 0xcc25660a, 0xf1c0, 0x4c3c, 0x85, 0x7f, 0xa5, 0x43, 0x79, 0xc9, 0x55, 0xc2);

