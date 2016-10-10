// Created file "Lib\src\Uuid\X64\i_urlmki"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITransProtocolSink, 0x7291765a, 0xa83f, 0x401d, 0x81, 0xa6, 0x11, 0x2c, 0x3a, 0x46, 0x8a, 0x7b);

