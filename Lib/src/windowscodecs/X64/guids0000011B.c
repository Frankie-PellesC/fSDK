// Created file "Lib\src\windowscodecs\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WICXMPStructMetadataWriter, 0x22c21f93, 0x7ddb, 0x411c, 0x9b, 0x17, 0xc5, 0xb7, 0xbd, 0x06, 0x4a, 0xbc);

