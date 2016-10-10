// Created file "Lib\src\Uuid\X64\lltdmapper_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILLTDMappingEvents, 0xefa8a829, 0x0b92, 0x44ea, 0xa8, 0x82, 0xea, 0xc4, 0x05, 0xcf, 0x76, 0x8b);

