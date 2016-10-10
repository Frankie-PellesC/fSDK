// Created file "Lib\src\Uuid\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_EnumProgressItems, 0x2c941fca, 0x975b, 0x59be, 0xa9, 0x60, 0x9a, 0x2a, 0x26, 0x28, 0x53, 0xa5);

