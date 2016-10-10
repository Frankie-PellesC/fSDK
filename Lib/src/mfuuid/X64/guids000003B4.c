// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFNETCONNECTION_NETCHANNEL, 0x5e4e1ca5, 0xc6b7, 0x4277, 0xb5, 0x24, 0x5e, 0xa2, 0xee, 0xd6, 0x7d, 0x7d);

