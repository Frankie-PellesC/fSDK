// Created file "Lib\src\Uuid\napclsids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NapSystemHealthAgentBinding, 0x8e594310, 0x16ca, 0x4a00, 0x93, 0x2f, 0xf7, 0x09, 0x69, 0xf9, 0x90, 0xc0);

