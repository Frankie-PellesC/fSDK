// Created file "Lib\src\PhotoAcquireUID\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICreatedDirectories, 0x00f232d5, 0xaaf1, 0x4406, 0xa1, 0x0a, 0xdd, 0xb4, 0xfc, 0x45, 0x3e, 0x92);

