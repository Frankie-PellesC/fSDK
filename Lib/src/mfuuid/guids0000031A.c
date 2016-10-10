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

DEFINE_GUID(MFDEVICE_BASIC_STATISTICS, 0xcdd713d4, 0x03ce, 0x4bbe, 0xa2, 0x3e, 0x26, 0x6a, 0x33, 0xa0, 0x32, 0x70);

