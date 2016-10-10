// Created file "Lib\src\Uuid\lltdmapper_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ILLTDEnumerator, 0xb9d905d7, 0xaa24, 0x4208, 0xba, 0x33, 0x01, 0x0c, 0x8c, 0x1b, 0xd2, 0x00);

