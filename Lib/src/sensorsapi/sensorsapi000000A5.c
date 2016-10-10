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

DEFINE_GUID(SENSOR_CATEGORY_LIGHT, 0x17a665c0, 0x9063, 0x4216, 0xb2, 0x02, 0x5c, 0x7a, 0x25, 0x5e, 0x18, 0xce);

