// Created file "Lib\src\mfuuid\X64\mfidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFTranscodeSinkInfoProvider, 0x8cffcd2e, 0x5a03, 0x4a3a, 0xaf, 0xf7, 0xed, 0xcd, 0x10, 0x7c, 0x62, 0x0e);

