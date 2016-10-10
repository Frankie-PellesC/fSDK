// Created file "Lib\src\mfuuid\X64\mfplay_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFPMediaItem, 0x90eb3e6b, 0xecbf, 0x45cc, 0xb1, 0xda, 0xc6, 0xfe, 0x3e, 0xa7, 0x0d, 0x57);

