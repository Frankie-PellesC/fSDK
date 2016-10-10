// Created file "Lib\src\Uuid\X64\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_PersistentDataChannel, 0xbc9b54ab, 0x7883, 0x4c13, 0x90, 0x9f, 0x03, 0x3d, 0x03, 0x26, 0x79, 0x90);

