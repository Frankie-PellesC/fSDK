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

DEFINE_GUID(SENSOR_TYPE_LOCATION_DEAD_RECKONING, 0x1a37d538, 0xf28b, 0x42da, 0x9f, 0xce, 0xa9, 0xd0, 0xa2, 0xa6, 0xd8, 0x29);

