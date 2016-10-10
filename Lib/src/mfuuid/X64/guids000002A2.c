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

DEFINE_GUID(MFWMIGUID_URLMON_BYTESTREAM_EVENT, 0x839ee1cb, 0xfc91, 0x44d9, 0xa5, 0xe0, 0x8f, 0x51, 0xf5, 0x2c, 0xf7, 0x78);

