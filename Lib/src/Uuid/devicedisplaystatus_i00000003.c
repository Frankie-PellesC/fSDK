// Created file "Lib\src\Uuid\devicedisplaystatus_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDeviceDisplayPropertiesCallback, 0x91867751, 0x3d57, 0x4614, 0xb9, 0x38, 0x70, 0x65, 0xb7, 0x58, 0xa0, 0x35);

DEFINE_GUID(IID_IDeviceDisplayPropertiesProvider, 0xef05e46f, 0x6730, 0x40c6, 0xba, 0xb1, 0x96, 0xf2, 0xa8, 0x07, 0x62, 0x26);

DEFINE_GUID(IID_IDeviceDisplayStatusFactory, 0xdb4b2731, 0x7a52, 0x4923, 0xa6, 0x03, 0x90, 0x8f, 0x7f, 0xa1, 0xee, 0xdc);

