// Created file "Lib\src\MMC\X64\ndmgrpriv"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IConsoleTree, 0xa2b670f0, 0xfdf9, 0x4cb9, 0xa9, 0x0f, 0x47, 0xd0, 0xbe, 0x88, 0xee, 0x79);

