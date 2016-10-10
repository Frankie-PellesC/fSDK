// Created file "Lib\src\mfuuid\X64\mfobjects_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFVideoMediaType, 0xb99f381f, 0xa8f9, 0x47a2, 0xa5, 0xaf, 0xca, 0x3a, 0x22, 0x5a, 0x38, 0x90);

