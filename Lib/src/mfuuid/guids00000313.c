// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MF_SCREEN_CAPTURE_CONFIG_SERVICE, 0x27696d75, 0x080e, 0x4d5c, 0x92, 0x8b, 0x9e, 0x82, 0x4a, 0xb5, 0x75, 0x29);

