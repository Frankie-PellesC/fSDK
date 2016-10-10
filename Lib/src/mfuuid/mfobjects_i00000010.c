// Created file "Lib\src\mfuuid\mfobjects_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFCollection, 0x5bc8a76b, 0x869a, 0x46a3, 0x9b, 0x03, 0xfa, 0x21, 0x8a, 0x66, 0xae, 0xbe);

