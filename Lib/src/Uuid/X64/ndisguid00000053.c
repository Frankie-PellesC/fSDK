// Created file "Lib\src\Uuid\X64\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NIC_SWITCH_CURRENT_CAPABILITIES, 0xe76fdaf3, 0x0be7, 0x4d95, 0x87, 0xe9, 0x5a, 0xea, 0xd4, 0xb5, 0x90, 0xe9);

