// Created file "Lib\src\Uuid\X64\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwAuthorizedApplications, 0x644efd52, 0xccf9, 0x486c, 0x97, 0xa2, 0x39, 0xf3, 0x52, 0x57, 0x0b, 0x30);

