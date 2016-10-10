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

DEFINE_GUID(IID_AsyncINapSystemHealthAgentCallback, 0x860d8fd9, 0x0219, 0x43ea, 0xae, 0x7f, 0x59, 0x61, 0x1f, 0x4c, 0xc1, 0x6a);

