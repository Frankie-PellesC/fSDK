// Created file "Lib\src\Uuid\X64\shguids2"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IShellRunDll, 0xfce4bde0, 0x4b68, 0x4b80, 0x8e, 0x9c, 0x74, 0x26, 0x31, 0x5a, 0x73, 0x88);

