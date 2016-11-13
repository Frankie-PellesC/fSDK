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

DEFINE_GUID(GUID_2d9a0f9c_e67b_4b24_ab44_92b3e770c020, 0x2d9a0f9c, 0xe67b, 0x4b24, 0xab, 0x44, 0x92, 0xb3, 0xe7, 0x70, 0xc0, 0x20);

