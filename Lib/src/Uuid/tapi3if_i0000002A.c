// Created file "Lib\src\Uuid\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumPluggableSuperclassInfo, 0xe9586a80, 0x89e6, 0x4cff, 0x93, 0x1d, 0x47, 0x8d, 0x57, 0x51, 0xf4, 0xc0);

