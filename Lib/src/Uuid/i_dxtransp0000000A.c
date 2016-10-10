// Created file "Lib\src\Uuid\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTFilterCollection, 0x22b07b33, 0x8bfb, 0x49d4, 0x9b, 0x90, 0x09, 0x38, 0x37, 0x0c, 0x90, 0x19);

