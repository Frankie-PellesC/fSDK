// Created file "Lib\src\Uuid\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCEnumUserSearchResults, 0x83d4d877, 0xaa5d, 0x4a5b, 0x8d, 0x0e, 0x00, 0x2a, 0x80, 0x67, 0xe0, 0xe8);

