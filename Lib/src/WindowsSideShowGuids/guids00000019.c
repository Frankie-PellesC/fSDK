// Created file "Lib\src\WindowsSideShowGuids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DISK_POWERDOWN_TIMEOUT, 0x6738e2c4, 0xe8a5, 0x4a42, 0xb1, 0x6a, 0xe0, 0x40, 0xe7, 0x69, 0x75, 0x6e);

