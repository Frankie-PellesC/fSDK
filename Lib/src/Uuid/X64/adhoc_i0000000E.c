// Created file "Lib\src\Uuid\X64\adhoc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_Dot11AdHocManager, 0xdd06a84f, 0x83bd, 0x4d01, 0x8a, 0xb9, 0x23, 0x89, 0xfe, 0xa0, 0x86, 0x9e);

