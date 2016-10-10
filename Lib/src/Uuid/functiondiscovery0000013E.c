// Created file "Lib\src\Uuid\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_PUBSVCS_SCOPE, 0x2ae2b567, 0xeecb, 0x4a3e, 0xb7, 0x53, 0x54, 0xc7, 0x25, 0x49, 0x43, 0x66);

