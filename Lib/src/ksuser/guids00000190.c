// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_KsIBasicAudioInterfaceHandler, 0xb9f8ac3e, 0x0f71, 0x11d2, 0xb7, 0x2c, 0x00, 0xc0, 0x4f, 0xb6, 0xbd, 0x3d);

