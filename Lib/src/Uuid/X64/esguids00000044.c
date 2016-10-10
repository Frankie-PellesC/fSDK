// Created file "Lib\src\Uuid\X64\esguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_PERFSTATE_POLICY, 0xbbdc3814, 0x18e9, 0x4463, 0x8a, 0x55, 0xd1, 0x97, 0x32, 0x7c, 0x45, 0xc0);

