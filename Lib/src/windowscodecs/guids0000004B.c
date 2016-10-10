// Created file "Lib\src\windowscodecs\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(D3DAUTHENTICATEDQUERY_CHANNELTYPE, 0xbc1b18a5, 0xb1fb, 0x42ab, 0xbd, 0x94, 0xb5, 0x82, 0x8b, 0x4b, 0xf7, 0xbe);

