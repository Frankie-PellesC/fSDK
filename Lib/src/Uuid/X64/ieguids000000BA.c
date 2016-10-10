// Created file "Lib\src\Uuid\X64\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CATID_Insertable, 0x40fc6ed3, 0x2438, 0x11cf, 0xa3, 0xdb, 0x08, 0x00, 0x36, 0xf1, 0x25, 0x02);

