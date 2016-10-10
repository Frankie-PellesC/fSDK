// Created file "Lib\src\Uuid\tapi3iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_FilePlaybackTerminal, 0x0cb9914c, 0x79cd, 0x47dc, 0xad, 0xb0, 0x32, 0x7f, 0x47, 0xce, 0xfb, 0x20);

