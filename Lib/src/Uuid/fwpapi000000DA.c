// Created file "Lib\src\Uuid\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_CALLOUT_TCP_CHIMNEY_ACCEPT_LAYER_V6, 0x0378cf41, 0xbf98, 0x4603, 0x81, 0xf2, 0x7f, 0x12, 0x58, 0x60, 0x79, 0xf6);

