// Created file "Lib\src\amstrmid\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CODECAPI_AVEncDDLtRtSurroundMixLvl_x10, 0x212246c7, 0x3d2c, 0x4dfa, 0xbc, 0x21, 0x65, 0x2a, 0x90, 0x98, 0x69, 0x0d);

