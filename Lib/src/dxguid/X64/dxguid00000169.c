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

DEFINE_GUID(GUID_02860630_bf3b_42a8_b14e_91eda2f51ea5, 0x02860630, 0xbf3b, 0x42a8, 0xb1, 0x4e, 0x91, 0xed, 0xa2, 0xf5, 0x1e, 0xa5);

