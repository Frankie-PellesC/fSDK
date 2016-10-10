// Created file "Lib\src\Uuid\i_docobj"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IZoomEvents, 0x41b68150, 0x904c, 0x4e17, 0xa0, 0xba, 0xa4, 0x38, 0x18, 0x2e, 0x35, 0x9d);

