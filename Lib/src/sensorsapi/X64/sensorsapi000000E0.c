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

DEFINE_GUID(SENSOR_DATA_TYPE_MAGNETIC_HEADING_DEGREES, 0x055c74d8, 0xca6f, 0x47d6, 0x95, 0xc6, 0x1e, 0xd3, 0x63, 0x7a, 0x0f, 0xf4);

