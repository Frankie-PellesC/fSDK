// Created file "Lib\src\Uuid\X64\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwRemoteAdminSettings, 0xd4becddf, 0x6f73, 0x4a83, 0xb8, 0x32, 0x9c, 0x66, 0x87, 0x4c, 0xd2, 0x0e);

