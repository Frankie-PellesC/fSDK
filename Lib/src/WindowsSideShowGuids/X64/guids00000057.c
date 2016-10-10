// Created file "Lib\src\WindowsSideShowGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_MIN_CORES, 0x0cc5b647, 0xc1df, 0x4637, 0x89, 0x1a, 0xde, 0xc3, 0x5c, 0x31, 0x85, 0x83);

