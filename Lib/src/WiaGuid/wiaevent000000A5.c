// Created file "Lib\src\WiaGuid\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WIA_CATEGORY_FEEDER_BACK, 0x61ca74d4, 0x39db, 0x42aa, 0x89, 0xb1, 0x8c, 0x19, 0xc9, 0xcd, 0x4c, 0x23);

