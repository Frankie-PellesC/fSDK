// Created file "Lib\src\PhotoAcquireUID\X64\photoacquireuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DISK_ADAPTIVE_POWERDOWN, 0x396a32e1, 0x499a, 0x40b2, 0x91, 0x24, 0xa9, 0x6a, 0xfe, 0x70, 0x76, 0x67);

