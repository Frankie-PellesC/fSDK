// Created file "Lib\src\Uuid\X64\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTFilterBehavior, 0x14d7dddd, 0xaca2, 0x4e45, 0x95, 0x04, 0x38, 0x08, 0xab, 0xeb, 0x4f, 0x92);

