// Created file "Lib\src\Uuid\X64\i_urlmon"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEncodingFilterFactory, 0x70bdde00, 0xc18e, 0x11d0, 0xa9, 0xce, 0x00, 0x60, 0x97, 0x94, 0x23, 0x11);

