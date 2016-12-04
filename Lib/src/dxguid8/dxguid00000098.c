// Created file "tmp\src\dxguid\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DirectPlay8LobbiedApplication, 0x667955ad, 0x6b3b, 0x43ca, 0xb9, 0x49, 0xbc, 0x69, 0xb5, 0xba, 0xff, 0x7f);

