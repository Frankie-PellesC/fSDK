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

DEFINE_GUID(GUID_NIC_SWITCH_HARDWARE_CAPABILITIES, 0x37cab40c, 0xd1e8, 0x4301, 0x8c, 0x1d, 0x58, 0x46, 0x5e, 0x0c, 0x4c, 0x0f);

