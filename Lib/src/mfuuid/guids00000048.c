// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_PERF_DECREASE_POLICY, 0x40fbefc7, 0x2e9d, 0x4d25, 0xa1, 0x85, 0x0c, 0xfd, 0x85, 0x74, 0xba, 0xc6);

