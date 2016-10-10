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

DEFINE_GUID(MF_BYTESTREAM_LAST_MODIFIED_TIME, 0xfc35828b, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);

