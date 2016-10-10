// Created file "Lib\src\Uuid\X64\i_iebroker"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEInetcplRasBroker, 0x7819a000, 0x56f5, 0x432f, 0xbf, 0x43, 0x66, 0x2a, 0x11, 0x26, 0x16, 0x96);

