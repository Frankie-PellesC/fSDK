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

DEFINE_GUID(PPM_PERFSTATES_DATA_GUID, 0x5708cc20, 0x7d40, 0x4bf4, 0xb4, 0xaa, 0x2b, 0x01, 0x33, 0x8d, 0x01, 0x26);

