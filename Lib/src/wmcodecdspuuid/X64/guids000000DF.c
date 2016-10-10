// Created file "Lib\src\wmcodecdspuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CFileIo, 0x11993195, 0x1244, 0x4840, 0xab, 0x44, 0x48, 0x09, 0x75, 0xc4, 0xff, 0xe4);

