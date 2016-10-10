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

DEFINE_GUID(MFSourceReader_SampleAttribute_MediaType, 0x0ea5c1e8, 0x9845, 0x41e0, 0xa2, 0x43, 0x72, 0x32, 0x07, 0xfc, 0x78, 0x1f);

