// Created file "Lib\src\Uuid\X64\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFsiDirectoryItem2, 0xf7fb4b9b, 0x6d96, 0x4d7b, 0x91, 0x15, 0x20, 0x1b, 0x14, 0x48, 0x11, 0xef);

