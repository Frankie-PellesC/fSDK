// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MR_STREAM_VOLUME_SERVICE, 0xf8b5fa2f, 0x32ef, 0x46f5, 0xb1, 0x72, 0x13, 0x21, 0x21, 0x2f, 0xb2, 0xc4);

