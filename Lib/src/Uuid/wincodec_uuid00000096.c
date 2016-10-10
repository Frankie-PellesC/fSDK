// Created file "Lib\src\Uuid\wincodec_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_ContainerFormatTiff, 0x163bcc30, 0xe2e9, 0x4f0b, 0x96, 0x1d, 0xa3, 0xe9, 0xfd, 0xb7, 0x88, 0xa3);

