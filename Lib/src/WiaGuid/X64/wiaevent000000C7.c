// Created file "Lib\src\WiaGuid\X64\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WiaAudFmt_WMA, 0xd61d6413, 0x8bc2, 0x438f, 0x93, 0xad, 0x21, 0xbd, 0x48, 0x4d, 0xb6, 0xa1);

