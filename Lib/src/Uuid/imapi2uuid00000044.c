// Created file "Lib\src\Uuid\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_DFileSystemImageImportEvents, 0xd25c30f9, 0x4087, 0x4366, 0x9e, 0x24, 0xe5, 0x5b, 0xe2, 0x86, 0x42, 0x4b);

