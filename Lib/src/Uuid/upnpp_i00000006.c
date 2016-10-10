// Created file "Lib\src\Uuid\upnpp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISOAPRequest, 0xad194525, 0x6e01, 0x4bca, 0x92, 0x9c, 0x23, 0xc7, 0x38, 0x33, 0x36, 0xaf);

