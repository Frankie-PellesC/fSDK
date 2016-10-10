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

DEFINE_GUID(CLSID_DXTMatrix, 0x4abf5a06, 0x5568, 0x4834, 0xbe, 0xe3, 0x32, 0x7a, 0x6d, 0x95, 0xa6, 0x85);

