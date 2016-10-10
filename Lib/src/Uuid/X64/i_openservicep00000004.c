// Created file "Lib\src\Uuid\X64\i_openservicep"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOpenServiceUninstallable, 0xa440e332, 0xaee2, 0x4348, 0xbb, 0x3b, 0xb5, 0x0f, 0x17, 0xb7, 0xb8, 0x49);

