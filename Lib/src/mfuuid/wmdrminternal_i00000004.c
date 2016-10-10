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

DEFINE_GUID(IID_IMFWMDRMSinkManager, 0x096ac7e9, 0xf1fe, 0x4f89, 0x83, 0x9d, 0x4e, 0x2c, 0xad, 0x66, 0x2f, 0x5c);

