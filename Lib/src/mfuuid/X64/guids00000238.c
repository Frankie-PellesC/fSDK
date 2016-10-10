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

DEFINE_GUID(MFOUTPUT_COMPRESSEDDIGITALVIDEO, 0x6c6827b9, 0xe708, 0x4f46, 0xb8, 0xf6, 0x76, 0x65, 0x87, 0x91, 0xed, 0xcb);

