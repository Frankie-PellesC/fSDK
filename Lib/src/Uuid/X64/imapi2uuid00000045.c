// Created file "Lib\src\Uuid\X64\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IIsoImageManager, 0x6ca38be5, 0xfbbb, 0x4800, 0x95, 0xa1, 0xa4, 0x38, 0x86, 0x5e, 0xb0, 0xd4);

