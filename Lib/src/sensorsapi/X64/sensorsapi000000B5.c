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

DEFINE_GUID(SENSOR_TYPE_ACCELEROMETER_3D, 0xc2fb0f5f, 0xe2d2, 0x4c78, 0xbc, 0xd0, 0x35, 0x2a, 0x95, 0x82, 0x81, 0x9d);

