// Created file "Lib\src\mfuuid\X64\wmcontainer_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFASFIndexer, 0x53590f48, 0xdc3b, 0x4297, 0x81, 0x3f, 0x78, 0x77, 0x61, 0xad, 0x7b, 0x3e);

