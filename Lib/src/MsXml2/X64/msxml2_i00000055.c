// Created file "Lib\src\MsXml2\X64\msxml2_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMXNamespaceManager, 0xc90352f6, 0x643c, 0x4fbc, 0xbb, 0x23, 0xe9, 0x96, 0xeb, 0x2d, 0x51, 0xfd);

