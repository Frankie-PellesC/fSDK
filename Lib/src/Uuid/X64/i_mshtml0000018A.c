// Created file "Lib\src\Uuid\X64\i_mshtml"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DIID_DWebBridgeEvents, 0xa6d897ff, 0x0a95, 0x11d1, 0xb0, 0xba, 0x00, 0x60, 0x08, 0x16, 0x6e, 0x11);

