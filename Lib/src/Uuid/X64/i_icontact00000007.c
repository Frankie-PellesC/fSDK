// Created file "Lib\src\Uuid\X64\i_icontact"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IContactPropertyCollection, 0xffd3adf8, 0xfa64, 0x4328, 0xb1, 0xb6, 0x2e, 0x0d, 0xb5, 0x09, 0xcb, 0x3c);

