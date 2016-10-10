// Created file "Lib\src\Uuid\X64\oledbdat"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDataSourceLocator, 0x2206ccb2, 0x19c1, 0x11d1, 0x89, 0xe0, 0x00, 0xc0, 0x4f, 0xd7, 0xa8, 0x29);

