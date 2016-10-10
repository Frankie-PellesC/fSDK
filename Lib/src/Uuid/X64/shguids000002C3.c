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

DEFINE_GUID(IID_ISyncMgrHandler, 0x04ec2e43, 0xac77, 0x49f9, 0x9b, 0x98, 0x03, 0x07, 0xef, 0x7a, 0x72, 0xa2);

