// Created file "Lib\src\mfuuid\wmdrminternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFWMDRMContentProtector, 0x1687cca1, 0xf62f, 0x472b, 0x97, 0xee, 0x22, 0x4d, 0x3d, 0x0b, 0xd1, 0x3a);

