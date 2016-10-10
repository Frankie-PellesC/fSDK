// Created file "Lib\src\Uuid\msdaosp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_MSDAOSPT, 0x0ae9a4e0, 0x18d4, 0x11d1, 0xb3, 0xb3, 0x00, 0xaa, 0x00, 0xc1, 0xa9, 0x24);

DEFINE_GUID(DIID_DataSourceObject, 0x0ae9a4e4, 0x18d4, 0x11d1, 0xb3, 0xb3, 0x00, 0xaa, 0x00, 0xc1, 0xa9, 0x24);

