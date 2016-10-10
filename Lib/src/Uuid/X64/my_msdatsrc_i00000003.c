// Created file "Lib\src\Uuid\X64\my_msdatsrc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_MSDATASRC, 0x7c0ffab0, 0xcd84, 0x11d0, 0x94, 0x9a, 0x00, 0xa0, 0xc9, 0x11, 0x10, 0xed);

DEFINE_GUID(IID_DataSourceListener, 0x7c0ffab2, 0xcd84, 0x11d0, 0x94, 0x9a, 0x00, 0xa0, 0xc9, 0x11, 0x10, 0xed);

DEFINE_GUID(IID_DataSource, 0x7c0ffab3, 0xcd84, 0x11d0, 0x94, 0x9a, 0x00, 0xa0, 0xc9, 0x11, 0x10, 0xed);

