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

DEFINE_GUID(IID_IFileSystemImage3, 0x7cff842c, 0x7e97, 0x4807, 0x83, 0x04, 0x91, 0x0d, 0xd8, 0xf7, 0xc0, 0x51);

