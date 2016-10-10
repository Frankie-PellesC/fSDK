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

DEFINE_GUID(SENSOR_TYPE_BARCODE_SCANNER, 0x990b3d8f, 0x85bb, 0x45ff, 0x91, 0x4d, 0x99, 0x8c, 0x04, 0xf3, 0x72, 0xdf);

