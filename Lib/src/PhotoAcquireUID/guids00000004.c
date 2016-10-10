// Created file "Lib\src\PhotoAcquireUID\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUserInputString, 0x00f243a1, 0x205b, 0x45ba, 0xae, 0x26, 0xab, 0xbc, 0x53, 0xaa, 0x7a, 0x6f);

