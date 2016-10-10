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

DEFINE_GUID(IID_IInternetZoneManagerEx, 0xa4c23339, 0x8e06, 0x431e, 0x9b, 0xf4, 0x7e, 0x71, 0x1c, 0x08, 0x56, 0x48);

