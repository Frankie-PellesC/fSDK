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

DEFINE_GUID(SENSOR_DATA_TYPE_TILT_X_DEGREES, 0x1637d8a2, 0x4248, 0x4275, 0x86, 0x5d, 0x55, 0x8d, 0xe8, 0x4a, 0xed, 0xfd);

