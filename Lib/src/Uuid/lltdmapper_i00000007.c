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

DEFINE_GUID(IID_ILLTDNode, 0xce6aeb1f, 0xfcbb, 0x4a7f, 0xa3, 0x84, 0x73, 0xd1, 0x65, 0x6b, 0xae, 0x70);

