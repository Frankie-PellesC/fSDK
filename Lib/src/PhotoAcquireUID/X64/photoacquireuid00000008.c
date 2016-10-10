// Created file "Lib\src\PhotoAcquireUID\X64\photoacquireuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_POWERSCHEME_PERSONALITY, 0x245d8541, 0x3943, 0x4422, 0xb0, 0x25, 0x13, 0xa7, 0x84, 0xf6, 0x79, 0xb7);

