// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSDATAFORMAT_TYPE_DVD_ENCRYPTED_PACK, 0xed0b916a, 0x044d, 0x11d1, 0xaa, 0x78, 0x00, 0xc0, 0x4f, 0xc3, 0x1d, 0x60);

