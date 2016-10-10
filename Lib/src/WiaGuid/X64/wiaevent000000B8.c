// Created file "Lib\src\WiaGuid\X64\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WiaImgFmt_JPEG2K, 0x344ee2b2, 0x39db, 0x4dde, 0x81, 0x73, 0xc4, 0xb7, 0x5f, 0x8f, 0x1e, 0x49);

