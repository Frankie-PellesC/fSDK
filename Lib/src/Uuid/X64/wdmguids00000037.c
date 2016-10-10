// Created file "Lib\src\Uuid\X64\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_WUDF_DEVICE_HOST_PROBLEM, 0xc43d25bd, 0x9346, 0x40ee, 0xa2, 0xd2, 0xd7, 0x0c, 0x15, 0xf8, 0xb7, 0x5b);

