// Created file "Lib\src\PortableDeviceGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DEVPKEY_MTPBTH_IsConnected, 0xea1237fa, 0x589d, 0x4472, 0x84, 0xe4, 0x0a, 0xbe, 0x36, 0xfd, 0x62, 0xef);

