// Created file "Lib\src\Uuid\ncclsid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_BluetoothConnectionManager, 0xb4c8df59, 0xd16f, 0x4042, 0x80, 0xb7, 0x35, 0x57, 0xa2, 0x54, 0xb7, 0xc5);

