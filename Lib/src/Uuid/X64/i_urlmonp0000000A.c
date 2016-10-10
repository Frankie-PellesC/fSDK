// Created file "Lib\src\Uuid\X64\i_urlmonp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IIETldListManager, 0x097db5b4, 0xd8df, 0x4618, 0xb9, 0x55, 0x03, 0xba, 0x52, 0x1c, 0xfb, 0x3d);

