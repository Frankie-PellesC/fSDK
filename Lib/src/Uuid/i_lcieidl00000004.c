// Created file "Lib\src\Uuid\i_lcieidl"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILCIEParentComponent, 0xc00fc1fe, 0xfa95, 0x4d94, 0xb7, 0x9c, 0x0c, 0x13, 0xf0, 0xa0, 0x3c, 0x78);

