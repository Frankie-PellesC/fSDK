// Created file "Lib\src\Uuid\i_openservice"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOpenServiceActivityCategory, 0x850af9d6, 0x7309, 0x40b5, 0xbd, 0xb8, 0x78, 0x6c, 0x10, 0x6b, 0x21, 0x53);

