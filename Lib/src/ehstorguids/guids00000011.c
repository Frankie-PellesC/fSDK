// Created file "Lib\src\ehstorguids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS, 0xaded5e82, 0xb909, 0x4619, 0x99, 0x49, 0xf5, 0xd7, 0x1d, 0xac, 0x0b, 0xcb);

