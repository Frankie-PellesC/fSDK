// Created file "Lib\src\Uuid\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_DeviceInterface_PrinterDriverDirectory, 0x847c66de, 0xb8d6, 0x4af9, 0xab, 0xc3, 0x6f, 0x4f, 0x92, 0x6b, 0xc0, 0x39);

