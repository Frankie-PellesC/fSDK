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

DEFINE_GUID(MFWMIGUID_BASE_REMOTE_BYTESTREAM_EVENT, 0x07f6dafa, 0x0e12, 0x40de, 0xa7, 0x9b, 0x40, 0x3e, 0x71, 0x57, 0x72, 0x1f);

