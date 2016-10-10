// Created file "Lib\src\corguids\X64\ivehandler_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_VEHandlerLib, 0x856ca1b0, 0x7dab, 0x11d3, 0xac, 0xec, 0x00, 0xc0, 0x4f, 0x86, 0xc3, 0x09);

DEFINE_GUID(CLSID_VEHandlerClass, 0x856ca1b1, 0x7dab, 0x11d3, 0xac, 0xec, 0x00, 0xc0, 0x4f, 0x86, 0xc3, 0x09);

DEFINE_GUID(IID_IVEHandler, 0x856ca1b2, 0x7dab, 0x11d3, 0xac, 0xec, 0x00, 0xc0, 0x4f, 0x86, 0xc3, 0x09);

