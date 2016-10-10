// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MF_MT_DV_VAUX_CTRL_PACK, 0x2f84e1c4, 0x0da1, 0x4788, 0x93, 0x8e, 0x0d, 0xfb, 0xfb, 0xb3, 0x4b, 0x48);

