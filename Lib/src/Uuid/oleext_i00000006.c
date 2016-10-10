// Created file "Lib\src\Uuid\oleext_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IReconcileInitiator, 0x99180161, 0xda16, 0x101a, 0x93, 0x5c, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);

