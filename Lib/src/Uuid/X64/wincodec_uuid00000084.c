// Created file "Lib\src\Uuid\X64\wincodec_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_VendorMicrosoftBuiltIn, 0x257a30fd, 0x06b6, 0x462b, 0xae, 0xa4, 0x63, 0xf7, 0x0b, 0x86, 0xe5, 0x33);

