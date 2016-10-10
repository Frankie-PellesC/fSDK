// Created file "Lib\src\Uuid\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IInternetSecurityManagerEx2, 0xf1e50292, 0xa795, 0x4117, 0x8e, 0x09, 0x2b, 0x56, 0x0a, 0x72, 0xac, 0x60);

