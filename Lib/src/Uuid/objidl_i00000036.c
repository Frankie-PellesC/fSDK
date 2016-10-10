// Created file "Lib\src\Uuid\objidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IProgressNotify, 0xa9d758a0, 0x4617, 0x11cf, 0x95, 0xfc, 0x00, 0xaa, 0x00, 0x68, 0x0d, 0xb4);

