// Created file "Lib\src\Uuid\xpsprint_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_XpsPrint, 0xab483eeb, 0xdbbf, 0x4b9c, 0x81, 0x0d, 0x25, 0x8a, 0xeb, 0x38, 0x12, 0xff);

DEFINE_GUID(IID_IXpsPrintJobStream, 0x7a77dc5f, 0x45d6, 0x4dff, 0x93, 0x07, 0xd8, 0xcb, 0x84, 0x63, 0x47, 0xca);

DEFINE_GUID(IID_IXpsPrintJob, 0x5ab89b06, 0x8194, 0x425f, 0xab, 0x3b, 0xd7, 0xa9, 0x6e, 0x35, 0x01, 0x61);

