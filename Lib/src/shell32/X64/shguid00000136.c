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

DEFINE_GUID(FOLDERTYPEID_Printers, 0x2c7bbec6, 0xc844, 0x4a0a, 0x91, 0xfa, 0xce, 0xf6, 0xf5, 0x9c, 0xfd, 0xa1);

