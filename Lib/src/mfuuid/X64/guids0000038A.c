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

DEFINE_GUID(MSBBUILDER_UNICAST_ROLLOVER_URL, 0xa9b39ee8, 0x96d7, 0x4a21, 0x86, 0x3c, 0x70, 0xe2, 0xba, 0x09, 0x69, 0xfc);

