// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFNETVROOT_CONTENTDESCRIPTONLIMIT, 0x57750de9, 0x4ba0, 0x4f1d, 0x94, 0x75, 0x08, 0x06, 0x5d, 0x7a, 0xb8, 0x59);

