// Created file "Lib\src\mfuuid\X64\wmdrminternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFWMDRMOutputTrustAuthority2, 0x6973eea3, 0xbf0d, 0x4a5f, 0xab, 0x58, 0xfb, 0x7f, 0xd0, 0x03, 0xe1, 0x82);

