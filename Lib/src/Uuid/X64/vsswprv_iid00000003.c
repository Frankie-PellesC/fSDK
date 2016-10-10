// Created file "Lib\src\Uuid\X64\vsswprv_iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_VSSW, 0x93bb06b6, 0xb6da, 0x43c8, 0xbc, 0x9b, 0xe3, 0x2d, 0xb4, 0x9a, 0xa6, 0xf7);

DEFINE_GUID(CLSID_VSSoftwareProvider, 0x65ee1dba, 0x8ff4, 0x4a58, 0xac, 0x1c, 0x34, 0x70, 0xee, 0x2f, 0x37, 0x6a);

