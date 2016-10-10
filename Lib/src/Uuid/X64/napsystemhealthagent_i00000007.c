// Created file "Lib\src\Uuid\X64\napsystemhealthagent_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapSystemHealthAgentRequest, 0x5b360a69, 0x212d, 0x440d, 0xb3, 0x98, 0x7e, 0xef, 0xd4, 0x97, 0x85, 0x3a);

