// Created file "Lib\src\ADSIid\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDirectorySchemaMgmt, 0x75db3b9c, 0xa4d8, 0x11d0, 0xa7, 0x9c, 0x00, 0xc0, 0x4f, 0xd8, 0xd5, 0xa8);

