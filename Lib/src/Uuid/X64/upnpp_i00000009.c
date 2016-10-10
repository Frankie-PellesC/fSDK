// Created file "Lib\src\Uuid\X64\upnpp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_UPnPDeviceHostICSSupport, 0x797a9bb1, 0x9e49, 0x4e63, 0xaf, 0xe1, 0x1b, 0x45, 0xb9, 0xdc, 0x81, 0x62);

