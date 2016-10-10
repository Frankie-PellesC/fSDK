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

DEFINE_GUID(MFRECORDQUEUE_STATISTICS_SERVICE, 0x51b91358, 0x324c, 0x4a42, 0x99, 0xe2, 0xae, 0x8e, 0x3e, 0x09, 0xe9, 0x66);

