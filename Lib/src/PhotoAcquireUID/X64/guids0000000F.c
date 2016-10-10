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

DEFINE_GUID(CLSID_PhotoAcquire, 0x00f26e02, 0xe9f2, 0x4a9f, 0x9f, 0xdd, 0x5a, 0x96, 0x2f, 0xb2, 0x6a, 0x98);

