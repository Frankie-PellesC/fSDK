// Created file "Lib\src\mfuuid\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFNetCardeaLicenseRequestEvent, 0x674eff6a, 0x5144, 0x487a, 0xa0, 0x1d, 0x01, 0x3f, 0xc2, 0x3d, 0x03, 0x53);

