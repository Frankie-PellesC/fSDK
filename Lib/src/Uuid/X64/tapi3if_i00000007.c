// Created file "Lib\src\Uuid\X64\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITPluggableTerminalSuperclassInfo, 0x6d54e42c, 0x4625, 0x4359, 0xa6, 0xf7, 0x63, 0x19, 0x99, 0x10, 0x7e, 0x05);

