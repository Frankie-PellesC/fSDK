// Created file "Lib\src\mfuuid\X64\mfds_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFSourceFilterConfig, 0x7bb552d6, 0xcbd8, 0x42cc, 0xbc, 0x1a, 0x7b, 0x87, 0xa0, 0xa3, 0xa9, 0x69);

