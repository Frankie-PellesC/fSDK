// Created file "Lib\src\Uuid\X64\txlogpub_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFileBasedLogInit, 0x00951e8c, 0x1294, 0x11d1, 0x97, 0xe4, 0x00, 0xc0, 0x4f, 0xb9, 0x61, 0x8a);

