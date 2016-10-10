// Created file "Lib\src\ADSIid\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IKernelTransaction, 0x79427a2b, 0xf895, 0x40e0, 0xbe, 0x79, 0xb5, 0x7d, 0xc8, 0x2e, 0xd2, 0x31);

