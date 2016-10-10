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

DEFINE_GUID(SENSOR_DATA_TYPE_WIND_DIRECTION_DEGREES_ANTICLOCKWISE, 0x8b0aa2f1, 0x2d57, 0x42ee, 0x8c, 0xc0, 0x4d, 0x27, 0x62, 0x2b, 0x46, 0xc4);

