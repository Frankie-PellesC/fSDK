// Created file "Lib\src\mfuuid\mfds_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMpeg2DemultiplexerModeConfig, 0x3eb1ddcf, 0x2265, 0x4caa, 0xb0, 0xcc, 0x35, 0xac, 0x60, 0x77, 0x4f, 0x6f);

