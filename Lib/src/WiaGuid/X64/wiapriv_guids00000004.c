// Created file "Lib\src\WiaGuid\X64\wiapriv_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaItemInternal, 0xb884e681, 0x66ba, 0x4014, 0xaf, 0xbf, 0xdc, 0xb3, 0xbe, 0xe4, 0x5f, 0xaa);

