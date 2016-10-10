// Created file "Lib\src\msdasc\msdasc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IService, 0x06210e88, 0x01f5, 0x11d1, 0xb5, 0x12, 0x00, 0x80, 0xc7, 0x81, 0xc3, 0x84);

