// Created file "Lib\src\Uuid\X64\napsystemhealthvalidator_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapSystemHealthValidationRequest, 0xadacb3a0, 0xd4f4, 0x4f17, 0x89, 0x33, 0x51, 0xd6, 0x0f, 0xcc, 0xa6, 0x06);

