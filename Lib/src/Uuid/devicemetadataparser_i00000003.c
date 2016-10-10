// Created file "Lib\src\Uuid\devicemetadataparser_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDeviceMetadataParser, 0x6a8e8546, 0x71d2, 0x4c33, 0x8c, 0xc8, 0x62, 0x88, 0x2f, 0x54, 0x1d, 0x54);

