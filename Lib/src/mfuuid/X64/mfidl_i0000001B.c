// Created file "Lib\src\mfuuid\X64\mfidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFMetadata, 0xf88cfb8c, 0xef16, 0x4991, 0xb4, 0x50, 0xcb, 0x8c, 0x69, 0xe5, 0x17, 0x04);

