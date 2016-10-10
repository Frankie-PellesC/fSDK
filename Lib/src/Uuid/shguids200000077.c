// Created file "Lib\src\Uuid\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDeskBand2, 0x79d16de4, 0xabee, 0x4021, 0x8d, 0x9d, 0x91, 0x69, 0xb2, 0x61, 0xd6, 0x57);

