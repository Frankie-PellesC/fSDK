// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MACHINE_POLICY_PRESENT_GUID, 0x659fcae6, 0x5bdb, 0x4da9, 0xb1, 0xff, 0xca, 0x2a, 0x17, 0x8d, 0x46, 0xe0);

