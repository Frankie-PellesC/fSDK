// Created file "Lib\src\MSTask\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScheduledWorkItem, 0xa6b952f0, 0xa4b1, 0x11d0, 0x99, 0x7d, 0x00, 0xaa, 0x00, 0x68, 0x87, 0xec);

