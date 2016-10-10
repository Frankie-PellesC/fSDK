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

DEFINE_GUID(SENSOR_TYPE_MULTIVALUE_SWITCH, 0xb3ee4d76, 0x37a4, 0x4402, 0xb2, 0x5e, 0x99, 0xc6, 0x0a, 0x77, 0x5f, 0xa1);

