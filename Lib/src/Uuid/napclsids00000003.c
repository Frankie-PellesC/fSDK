// Created file "Lib\src\Uuid\napclsids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NapEnforcementClientBinding, 0x9443b89b, 0x6564, 0x496a, 0xb1, 0x9c, 0x6c, 0x6d, 0x22, 0x70, 0x90, 0x45);

