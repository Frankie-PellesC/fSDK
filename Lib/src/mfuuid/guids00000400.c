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

DEFINE_GUID(MF_TIME_FORMAT_NATIVE_TIMECODE, 0xcb4fb266, 0x34e8, 0x456d, 0x8a, 0x72, 0xeb, 0x36, 0x16, 0xd4, 0xf8, 0x47);

