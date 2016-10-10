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

DEFINE_GUID(IID_IWMDRMLicenseManagement, 0xf4828dc7, 0x8945, 0x4d05, 0xab, 0x05, 0x66, 0x7a, 0xb9, 0x9d, 0x29, 0xee);

