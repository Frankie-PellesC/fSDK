// Created file "Lib\src\PortableDeviceGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_VIDEO_FRAMERATE, 0x346f2163, 0xf998, 0x4146, 0x8b, 0x01, 0xd1, 0x9b, 0x4c, 0x00, 0xde, 0x9a);

