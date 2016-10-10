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

DEFINE_GUID(SENSOR_CATEGORY_ELECTRICAL, 0xfb73fcd8, 0xfc4a, 0x483c, 0xac, 0x58, 0x27, 0xb6, 0x91, 0xc6, 0xbe, 0xff);

