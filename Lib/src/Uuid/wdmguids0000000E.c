// Created file "Lib\src\Uuid\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED, 0xfcf528f6, 0xa82f, 0x47b1, 0xad, 0x3a, 0x80, 0x50, 0x59, 0x4c, 0xad, 0x28);

