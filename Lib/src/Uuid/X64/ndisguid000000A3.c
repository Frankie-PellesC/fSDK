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

DEFINE_GUID(GUID_NDIS_STATUS_TASK_OFFLOAD_HARDWARE_CAPABILITIES, 0xb6b8158b, 0x217c, 0x4b2a, 0xbe, 0x86, 0x6a, 0x04, 0xbe, 0xea, 0x65, 0xb8);

