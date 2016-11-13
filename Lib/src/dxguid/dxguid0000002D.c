// Created file "Lib\src\dxguid\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_USERINTERFACEBUTTON_ACTION, 0xa7066653, 0x8d6c, 0x40a8, 0x91, 0x0e, 0xa1, 0xf5, 0x4b, 0x84, 0xc7, 0xe5);

