// Created file "Lib\src\WiaGuid\wia_guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWiaAppErrorHandler, 0x6c16186c, 0xd0a6, 0x400c, 0x80, 0xf4, 0xd2, 0x69, 0x86, 0xa0, 0xe7, 0x34);

