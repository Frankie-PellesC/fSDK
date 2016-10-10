// Created file "Lib\src\Uuid\i_iedial"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDialBranding, 0x8aecafa9, 0x4306, 0x43cc, 0x8c, 0x5a, 0x76, 0x5f, 0x29, 0x79, 0xcc, 0x16);

