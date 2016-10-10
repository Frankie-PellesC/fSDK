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

DEFINE_GUID(MF_SEQUENCER_SOURCE_SERVICE, 0xbbd559f3, 0x8fc7, 0x4ef0, 0x81, 0x56, 0x77, 0xf4, 0x63, 0xca, 0x70, 0x75);

