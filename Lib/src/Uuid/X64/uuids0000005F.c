// Created file "Lib\src\Uuid\X64\uuids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING, 0x8809c2d8, 0xb155, 0x42d4, 0xbc, 0xda, 0x0d, 0x34, 0x56, 0x51, 0xb1, 0xdb);

