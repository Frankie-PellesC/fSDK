// Created file "Lib\src\sensorsapi\sensorsapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SENSOR_PROPERTY_MIN_REPORT_INTERVAL, 0x7f8383ec, 0xd3ec, 0x495c, 0xa8, 0xcf, 0xb8, 0xbb, 0xe8, 0x5c, 0x29, 0x20);

