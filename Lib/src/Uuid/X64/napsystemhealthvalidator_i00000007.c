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

DEFINE_GUID(IID_INapSystemHealthValidationRequest2, 0x91a5d706, 0x0cb4, 0x4a84, 0x83, 0x15, 0x93, 0x80, 0xd4, 0x53, 0xe3, 0x85);

