// Created file "Lib\src\Uuid\X64\i_iedial"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDialEventSink, 0x2d86f4ff, 0x6e2d, 0x4488, 0xb2, 0xe9, 0x69, 0x34, 0xaf, 0xd4, 0x1b, 0xea);

