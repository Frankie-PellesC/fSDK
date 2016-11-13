// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_cac1105f_619b_4d04_831a_44e1cbf12d57, 0xcac1105f, 0x619b, 0x4d04, 0x83, 0x1a, 0x44, 0xe1, 0xcb, 0xf1, 0x2d, 0x57);

