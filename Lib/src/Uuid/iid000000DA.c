// Created file "Lib\src\Uuid\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICRMRecoveryClerk, 0x46e4fa02, 0x8789, 0x4ab9, 0x8a, 0xd3, 0x8c, 0xf4, 0x6b, 0x84, 0x59, 0xc7);

