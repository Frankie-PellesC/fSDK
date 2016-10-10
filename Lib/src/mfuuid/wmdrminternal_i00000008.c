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

DEFINE_GUID(IID_IMFWMDRMContentProtectorInternal, 0x0c8be13b, 0x9ed5, 0x4b9e, 0xa7, 0x00, 0xda, 0x14, 0x99, 0x03, 0x24, 0x8e);

