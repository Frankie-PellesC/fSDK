// Created file "Lib\src\mfuuid\wmdrmsdk_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WMDRMContentEnablerActivate, 0x82435bdf, 0xf7c1, 0x4df9, 0x81, 0x03, 0xee, 0xab, 0xeb, 0xf3, 0xd6, 0xe1);

