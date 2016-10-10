// Created file "Lib\src\Uuid\X64\i_iebroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEAxInstallBrokerBroker, 0xc6bae7e5, 0xc740, 0x4996, 0xb9, 0xc9, 0xad, 0x4d, 0x3a, 0x68, 0x98, 0xd1);

