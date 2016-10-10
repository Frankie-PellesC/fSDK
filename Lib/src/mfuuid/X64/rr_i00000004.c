// Created file "Lib\src\mfuuid\X64\rr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRenewComponent, 0x2c574fa0, 0x483f, 0x42bc, 0x8d, 0x18, 0x79, 0xd0, 0x0c, 0x1b, 0x51, 0x90);

