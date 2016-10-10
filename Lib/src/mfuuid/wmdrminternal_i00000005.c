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

DEFINE_GUID(IID_IMFWMDRMOutputTrustAuthority, 0x8386925c, 0xb975, 0x42c6, 0x88, 0x57, 0x7e, 0xe4, 0x5f, 0xf0, 0x05, 0x52);

