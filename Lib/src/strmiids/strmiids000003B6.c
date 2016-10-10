// Created file "Lib\src\strmiids\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVMRAspectRatioControl, 0xede80b5c, 0xbad6, 0x4623, 0xb5, 0x37, 0x65, 0x58, 0x6c, 0x9f, 0x8d, 0xfd);

