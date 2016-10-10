// Created file "Lib\src\Uuid\X64\i_ocmm"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IImageDecodeEventSink2, 0x8ebd8a57, 0x8a96, 0x48c9, 0x84, 0xa6, 0x96, 0x2e, 0x2d, 0xb9, 0xc9, 0x31);

