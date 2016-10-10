// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DVDTrace_DriveIOCTL_Event, 0x5446fccb, 0xcac3, 0x442b, 0x95, 0x4d, 0x7e, 0xd7, 0xe7, 0xff, 0x8d, 0x1e);

