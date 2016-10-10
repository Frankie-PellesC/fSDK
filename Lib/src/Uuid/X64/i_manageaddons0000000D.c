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

DEFINE_GUID(CLSID_ExtensionManager, 0xaa043d17, 0x3a13, 0x42e8, 0xb4, 0x7a, 0x91, 0x18, 0xce, 0x4a, 0xaa, 0x32);

