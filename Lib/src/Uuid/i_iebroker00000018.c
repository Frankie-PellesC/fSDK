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

DEFINE_GUID(IID_IEBrokerObjectCleanup, 0x2e564fef, 0x5bb0, 0x4d9e, 0xb1, 0x69, 0xb4, 0x0a, 0x51, 0x17, 0x71, 0x5a);

