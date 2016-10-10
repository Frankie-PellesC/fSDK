// Created file "Lib\src\Shell32\X64\shguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ACLMRU, 0x6756a641, 0xde71, 0x11d0, 0x83, 0x1b, 0x00, 0xaa, 0x00, 0x5b, 0x43, 0x83);

