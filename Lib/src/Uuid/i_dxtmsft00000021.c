// Created file "Lib\src\Uuid\i_dxtmsft"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTRevealTrans, 0xb8095006, 0xa128, 0x464b, 0x8b, 0x2d, 0x90, 0x58, 0x0a, 0xee, 0x2b, 0x05);

