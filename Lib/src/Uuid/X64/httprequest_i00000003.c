// Created file "Lib\src\Uuid\X64\httprequest_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_WinHttp, 0x662901fc, 0x6951, 0x4854, 0x9e, 0xb2, 0xd9, 0xa2, 0x57, 0x0f, 0x2b, 0x2e);

