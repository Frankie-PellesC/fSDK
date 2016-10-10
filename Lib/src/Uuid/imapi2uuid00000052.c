// Created file "Lib\src\Uuid\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MsftIsoImageManager, 0xceee3b62, 0x8f56, 0x4056, 0x86, 0x9b, 0xef, 0x16, 0x91, 0x7e, 0x3e, 0xfc);

