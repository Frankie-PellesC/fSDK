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

DEFINE_GUID(LIBID_CONTACT, 0xffb3df4d, 0xf600, 0x473e, 0x92, 0xc1, 0xcf, 0x9a, 0x1f, 0x4c, 0xcc, 0xc5);

