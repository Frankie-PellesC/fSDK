// Created file "Lib\src\mfuuid\X64\mfinternal_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFByteStreamProgressiveDownload, 0xef92650a, 0xd0e5, 0x40a4, 0x8e, 0xa2, 0x1f, 0xe6, 0x9e, 0x8a, 0xd6, 0xac);

