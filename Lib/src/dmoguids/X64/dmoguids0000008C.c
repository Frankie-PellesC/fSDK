// Created file "Lib\src\dmoguids\X64\dmoguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DMOWrapperFilter, 0x94297043, 0xbd82, 0x4dfd, 0xb0, 0xde, 0x81, 0x77, 0x73, 0x9c, 0x6d, 0x20);

