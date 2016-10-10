// Created file "Lib\src\wmcodecdspuuid\X64\wmcodecdsp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CMPEGAACDecMediaObject, 0x8dde1772, 0xedad, 0x41c3, 0xb4, 0xbe, 0x1f, 0x30, 0xfb, 0x4e, 0xe0, 0xd6);

