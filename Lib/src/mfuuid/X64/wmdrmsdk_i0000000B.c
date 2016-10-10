// Created file "Lib\src\mfuuid\X64\wmdrmsdk_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWMDRMLicenseQuery, 0x20b970df, 0x0a58, 0x4d3c, 0x81, 0x7c, 0x4e, 0x3c, 0xcb, 0xb2, 0x53, 0xac);

