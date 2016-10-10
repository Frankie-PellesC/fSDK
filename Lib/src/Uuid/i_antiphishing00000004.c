// Created file "Lib\src\Uuid\i_antiphishing"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUrlReputationResult, 0xf465adeb, 0x62f6, 0x4435, 0x81, 0x83, 0x85, 0x7c, 0x07, 0xd9, 0x99, 0x32);

