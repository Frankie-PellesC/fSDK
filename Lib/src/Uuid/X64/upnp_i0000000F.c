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

DEFINE_GUID(IID_IUPnPDeviceFinderAddCallbackWithInterface, 0x983dfc0b, 0x1796, 0x44df, 0x89, 0x75, 0xca, 0x54, 0x5b, 0x62, 0x0e, 0xe5);

