// Created file "Lib\src\Uuid\X64\upnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPDeviceDocumentAccessEx, 0xc4bc4050, 0x6178, 0x4bd1, 0xa4, 0xb8, 0x63, 0x98, 0x32, 0x1f, 0x32, 0x47);

