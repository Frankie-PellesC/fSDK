// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FOLDERID_SamplePlaylists, 0x15ca69b3, 0x30ee, 0x49c1, 0xac, 0xe1, 0x6b, 0x5e, 0xc3, 0x72, 0xaf, 0xb5);

