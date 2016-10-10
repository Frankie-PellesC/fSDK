// Created file "Lib\src\Uuid\X64\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IInternetSecurityManagerEx, 0xf164edf1, 0xcc7c, 0x4f0d, 0x9a, 0x94, 0x34, 0x22, 0x26, 0x25, 0xc3, 0x93);

