// Created file "Lib\src\Uuid\i_autodiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMailAutoDiscovery, 0x80402dee, 0xb114, 0x4d32, 0xb4, 0x4e, 0x82, 0xfd, 0x82, 0x34, 0xc9, 0x2a);

