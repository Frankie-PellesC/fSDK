// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFWMIGUID_MEDIATYPE_CHANGE_EVENT, 0x88bc3905, 0x9dda, 0x4e4a, 0x87, 0x6f, 0xf7, 0xef, 0xff, 0xd9, 0x43, 0x5b);

