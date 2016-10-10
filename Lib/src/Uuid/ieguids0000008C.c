// Created file "Lib\src\Uuid\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_Accessibility, 0x1ea4dbf0, 0x3c3b, 0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);

