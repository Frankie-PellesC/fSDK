// Created file "Lib\src\sensorsapi\X64\sensorsapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SENSOR_DATA_TYPE_GAUGE_PRESSURE_PASCAL, 0x38564a7c, 0xf2f2, 0x49bb, 0x9b, 0x2b, 0xba, 0x60, 0xf6, 0x6a, 0x58, 0xdf);

