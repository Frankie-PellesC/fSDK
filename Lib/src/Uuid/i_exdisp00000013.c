// Created file "Lib\src\Uuid\i_exdisp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IShellUIHelper3, 0x528df2ec, 0xd419, 0x40bc, 0x9b, 0x6d, 0xdc, 0xdb, 0xf9, 0xc1, 0xb2, 0x5d);

