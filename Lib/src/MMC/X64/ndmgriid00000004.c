// Created file "Lib\src\MMC\X64\ndmgriid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMMCClipboardDataObject, 0x5491ab67, 0xafeb, 0x48b1, 0xb8, 0xdf, 0xb2, 0xd6, 0x38, 0x10, 0xef, 0x40);

