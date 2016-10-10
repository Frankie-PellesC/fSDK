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

DEFINE_GUID(IID_IMFStreamSink, 0x0a97b3cf, 0x8e7c, 0x4a3d, 0x8f, 0x8c, 0x0c, 0x84, 0x3d, 0xc2, 0x47, 0xfb);

