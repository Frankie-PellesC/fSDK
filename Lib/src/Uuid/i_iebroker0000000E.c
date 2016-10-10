// Created file "Lib\src\Uuid\i_iebroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEBrokerAttach, 0x7673b35e, 0x907a, 0x449d, 0xa4, 0x9f, 0xe5, 0xce, 0x47, 0xf0, 0xb0, 0xb2);

