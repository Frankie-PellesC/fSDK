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

DEFINE_GUID(IID_IEBrokerRegisterObjectCleanup, 0xc40b45c3, 0x1518, 0x46fb, 0xa0, 0xf0, 0x0c, 0x05, 0x61, 0x74, 0xd5, 0x55);

