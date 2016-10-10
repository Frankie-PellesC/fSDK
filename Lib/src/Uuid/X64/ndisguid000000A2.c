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

DEFINE_GUID(GUID_NDIS_STATUS_TASK_OFFLOAD_CURRENT_CONFIG, 0x45049fc6, 0x54d8, 0x40c8, 0x9c, 0x3d, 0xb0, 0x11, 0xc4, 0xe7, 0x15, 0xbc);

