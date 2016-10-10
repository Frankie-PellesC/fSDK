// Created file "Lib\src\WindowsSideShowGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS, 0xfbd9aa66, 0x9553, 0x4097, 0xba, 0x44, 0xed, 0x6e, 0x9d, 0x65, 0xea, 0xb8);

