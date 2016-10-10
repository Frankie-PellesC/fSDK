// Created file "Lib\src\WbemUuid\X64\wbemads_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_WMIEXTENSIONLib, 0xe503d000, 0x5c7f, 0x11d2, 0x8b, 0x74, 0x00, 0x10, 0x4b, 0x2a, 0xfb, 0x41);

DEFINE_GUID(IID_IWMIExtension, 0xadc1f06e, 0x5c7e, 0x11d2, 0x8b, 0x74, 0x00, 0x10, 0x4b, 0x2a, 0xfb, 0x41);

DEFINE_GUID(CLSID_WMIExtension, 0xf0975afe, 0x5c7f, 0x11d2, 0x8b, 0x74, 0x00, 0x10, 0x4b, 0x2a, 0xfb, 0x41);

