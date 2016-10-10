// Created file "Lib\src\Uuid\filter_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFilter, 0x89bcb740, 0x6119, 0x101a, 0xbc, 0xb7, 0x00, 0xdd, 0x01, 0x06, 0x55, 0xaf);

