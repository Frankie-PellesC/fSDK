// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFWMIGUID_AUDIORENDERER_BUFFERFULLNESS_EVENT, 0x674a28fb, 0xb8ba, 0x43db, 0x95, 0xe4, 0x73, 0x1f, 0x14, 0xcf, 0x1b, 0xdb);

