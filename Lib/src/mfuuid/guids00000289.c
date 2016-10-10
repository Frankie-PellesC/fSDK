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

DEFINE_GUID(MFWMIGUID_BUFFER_EVENT, 0xcfb318fe, 0x9439, 0x4974, 0x9b, 0xbd, 0xdd, 0xe5, 0xa6, 0xc2, 0xaf, 0x1b);

