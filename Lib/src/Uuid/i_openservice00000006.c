// Created file "Lib\src\Uuid\i_openservice"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOpenServiceManager, 0x5664125f, 0x4e10, 0x4e90, 0x98, 0xe4, 0xe4, 0x51, 0x3d, 0x95, 0x5a, 0x14);

