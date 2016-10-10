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

DEFINE_GUID(IID_IFsiNamedStreams, 0xed79ba56, 0x5294, 0x4250, 0x8d, 0x46, 0xf9, 0xae, 0xce, 0xe2, 0x34, 0x59);

