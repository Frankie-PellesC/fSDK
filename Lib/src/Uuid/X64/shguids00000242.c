// Created file "Lib\src\Uuid\X64\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISemanticNamedEntity, 0xa3025981, 0xc987, 0x46f3, 0x80, 0xf4, 0xf8, 0x38, 0xb5, 0x1d, 0x4f, 0xe4);

