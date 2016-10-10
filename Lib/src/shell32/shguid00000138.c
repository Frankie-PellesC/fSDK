// Created file "Lib\src\shell32\shguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FOLDERTYPEID_SoftwareExplorer, 0xd674391b, 0x52d9, 0x4e07, 0x83, 0x4e, 0x67, 0xc9, 0x86, 0x10, 0xf3, 0x9d);

