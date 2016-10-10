// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_CONTENT_TYPE_VIDEO_ALBUM, 0x012b0db7, 0xd4c1, 0x45d6, 0xb0, 0x81, 0x94, 0xb8, 0x77, 0x79, 0x61, 0x4f);

