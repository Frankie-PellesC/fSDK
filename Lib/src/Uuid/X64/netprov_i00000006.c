// Created file "Lib\src\Uuid\X64\netprov_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NetProvisioning, 0x2aa2b5fe, 0xb846, 0x4d07, 0x81, 0x0c, 0xb2, 0x1e, 0xe4, 0x53, 0x20, 0xe3);

