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

DEFINE_GUID(MFOUTPUT_UNCOMPRESSEDDIGITALAUDIO, 0x009ba252, 0xd1d6, 0x4782, 0xb5, 0x95, 0xa9, 0x92, 0x56, 0xdf, 0x94, 0x6d);

