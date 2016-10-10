// Created file "Lib\src\Uuid\X64\i_dxtmsft"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICrBlinds2, 0x7059d403, 0x599a, 0x4264, 0x81, 0x40, 0x64, 0x1e, 0xb8, 0xae, 0x1f, 0x64);

