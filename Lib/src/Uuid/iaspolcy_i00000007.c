// Created file "Lib\src\Uuid\iaspolcy_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRequestSource, 0x6bc096a9, 0x0ce6, 0x11d1, 0xba, 0xae, 0x00, 0xc0, 0x4f, 0xc2, 0xe2, 0x0d);

