// Created file "Lib\src\dxguid\d3d9guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PPM_PERFMON_PERFSTATE_GUID, 0x7fd18652, 0x0cfe, 0x40d2, 0xb0, 0xa1, 0x0b, 0x06, 0x6a, 0x87, 0x75, 0x9e);

