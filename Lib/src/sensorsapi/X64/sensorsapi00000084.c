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

DEFINE_GUID(SENSOR_EVENT_STATE_CHANGED, 0xbfd96016, 0x6bd7, 0x4560, 0xad, 0x34, 0xf2, 0xf6, 0x60, 0x7e, 0x8f, 0x81);

