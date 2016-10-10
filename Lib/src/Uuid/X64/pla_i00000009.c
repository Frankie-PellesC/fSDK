// Created file "Lib\src\Uuid\X64\pla_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPerformanceCounterDataCollector, 0x03837506, 0x098b, 0x11d8, 0x94, 0x14, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30);

