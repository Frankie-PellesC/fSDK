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

DEFINE_GUID(MEDIACACHE_DISK_LOW_THRESHOLD, 0xafd72f2a, 0x5bc5, 0x4813, 0xa0, 0x9e, 0xa6, 0x06, 0x89, 0x1b, 0xcc, 0xce);

