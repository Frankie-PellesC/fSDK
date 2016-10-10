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

DEFINE_GUID(IID_IELowUtilBroker, 0x7d0bbccf, 0xd991, 0x4b95, 0xa0, 0x3d, 0xc3, 0xf0, 0x3a, 0x72, 0x9f, 0xf9);

