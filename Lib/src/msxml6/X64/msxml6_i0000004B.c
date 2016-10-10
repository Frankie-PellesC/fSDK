// Created file "Lib\src\msxml6\X64\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IServerXMLHTTPRequest2, 0x2e01311b, 0xc322, 0x4b0a, 0xbd, 0x77, 0xb9, 0x0c, 0xfd, 0xc8, 0xdc, 0xe7);

