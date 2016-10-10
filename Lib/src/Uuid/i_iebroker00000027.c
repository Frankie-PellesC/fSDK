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

DEFINE_GUID(CLSID_CIEContentAdvisorBroker, 0x46cb32fa, 0xb5ca, 0x8a3a, 0x62, 0xca, 0xa7, 0x02, 0x3c, 0x04, 0x96, 0xc5);

