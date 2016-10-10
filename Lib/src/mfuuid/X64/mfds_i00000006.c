// Created file "Lib\src\mfuuid\X64\mfds_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFPsiFilterConfig, 0xf6ea8518, 0x63e9, 0x4f2e, 0x82, 0xbf, 0x90, 0x05, 0x7f, 0xc6, 0x80, 0xd6);

