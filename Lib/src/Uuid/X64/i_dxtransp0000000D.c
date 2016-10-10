// Created file "Lib\src\Uuid\X64\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTRedirectFilterInit, 0xd1a57094, 0x21f7, 0x4e6c, 0x93, 0xe5, 0xf5, 0xf7, 0x7f, 0x74, 0x82, 0x93);

