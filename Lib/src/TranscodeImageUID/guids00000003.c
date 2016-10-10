// Created file "Lib\src\TranscodeImageUID\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITranscodeImage, 0xbae86ddd, 0xdc11, 0x421c, 0xb7, 0xab, 0xcc, 0x55, 0xd1, 0xd6, 0x5c, 0x44);

