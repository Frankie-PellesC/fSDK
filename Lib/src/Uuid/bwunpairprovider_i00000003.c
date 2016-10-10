// Created file "Lib\src\Uuid\bwunpairprovider_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUninstallProvider, 0x1b0d2365, 0xb3a3, 0x4759, 0x95, 0x33, 0xd6, 0x86, 0x1e, 0x86, 0xde, 0x32);

