// Created file "Lib\src\Uuid\X64\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IResultsFolder, 0x96e5ae6d, 0x6ae1, 0x4b1c, 0x90, 0x0c, 0xc6, 0x48, 0x0e, 0xaa, 0x88, 0x28);

