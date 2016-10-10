// Created file "Lib\src\Uuid\X64\i_privacie"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRulesEnum, 0xff7f1ddc, 0xe8e2, 0x487c, 0xb9, 0x44, 0xda, 0x4c, 0x18, 0x54, 0x47, 0xe2);

