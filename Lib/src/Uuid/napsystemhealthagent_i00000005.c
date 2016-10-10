// Created file "Lib\src\Uuid\napsystemhealthagent_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapSystemHealthAgentCallback, 0xf1072a57, 0x214f, 0x4ee2, 0x83, 0x77, 0x14, 0xef, 0x14, 0x0c, 0xd9, 0xf3);

