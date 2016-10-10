// Created file "Lib\src\Uuid\upnphost_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPRemoteEndpointInfo, 0xc92eb863, 0x0269, 0x4aff, 0x9c, 0x72, 0x75, 0x32, 0x1b, 0xba, 0x29, 0x52);

