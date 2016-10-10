// Created file "Lib\src\tspubplugincom\tspubplugincom_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ItsPubPlugin, 0x70c04b05, 0xf347, 0x412b, 0x82, 0x2f, 0x36, 0xc9, 0x9c, 0x54, 0xca, 0x45);

