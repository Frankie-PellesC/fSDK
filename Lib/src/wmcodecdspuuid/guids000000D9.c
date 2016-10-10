// Created file "Lib\src\wmcodecdspuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CTocEntryList, 0x3a8cccbc, 0x0efd, 0x43a3, 0xb8, 0x38, 0xf3, 0x8a, 0x55, 0x2b, 0xa2, 0x37);

