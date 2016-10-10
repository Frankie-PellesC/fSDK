// Created file "Lib\src\WiaGuid\X64\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaUIExtension2, 0x305600d7, 0x5088, 0x46d7, 0x9a, 0x15, 0xb7, 0x7b, 0x09, 0xcd, 0xba, 0x7a);

