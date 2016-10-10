// Created file "Lib\src\Uuid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAppDomainHelper, 0xc7b67079, 0x8255, 0x42c6, 0x9e, 0xc0, 0x69, 0x94, 0xa3, 0x54, 0x87, 0x80);

