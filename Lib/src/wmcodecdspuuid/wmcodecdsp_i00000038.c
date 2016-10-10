// Created file "Lib\src\wmcodecdspuuid\wmcodecdsp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CMpeg2DecMediaObject, 0x863d66cd, 0xcdce, 0x4617, 0xb4, 0x7f, 0xc8, 0x92, 0x9c, 0xfc, 0x28, 0xa6);

