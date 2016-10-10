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

DEFINE_GUID(IID_AsyncIERegHelperBroker, 0xbfd074f8, 0x3a54, 0x4fb3, 0x87, 0x71, 0x27, 0x7d, 0x3e, 0x20, 0x31, 0xc5);

