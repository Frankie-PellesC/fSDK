// Created file "Lib\src\Uuid\X64\uninstalldevicefunction_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUninstallDeviceFunction, 0x776e1355, 0xb286, 0x4d5c, 0x93, 0x98, 0xa1, 0x4d, 0x1b, 0x3b, 0x89, 0xe9);

