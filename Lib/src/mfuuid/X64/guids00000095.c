// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MF_EVENT_SCRUBSAMPLE_TIME, 0x9ac712b3, 0xdcb8, 0x44d5, 0x8d, 0x0c, 0x37, 0x45, 0x5a, 0x27, 0x82, 0xe3);

