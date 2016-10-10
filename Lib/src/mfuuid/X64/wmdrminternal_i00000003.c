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

DEFINE_GUID(IID_IMFWMDRMContext, 0xe460ab45, 0x4682, 0x44be, 0xae, 0x54, 0x35, 0xaa, 0x3e, 0xdb, 0xf9, 0x90);

