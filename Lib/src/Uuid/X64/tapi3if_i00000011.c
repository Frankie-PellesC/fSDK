// Created file "Lib\src\Uuid\X64\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITCallInfo2, 0x94d70ca6, 0x7ab0, 0x4daa, 0x81, 0xca, 0xb8, 0xf8, 0x64, 0x3f, 0xae, 0xc1);

