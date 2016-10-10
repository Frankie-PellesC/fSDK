// Created file "Lib\src\Uuid\netcon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetSharingEveryConnectionCollection, 0x33c4643c, 0x7811, 0x46fa, 0xa8, 0x9a, 0x76, 0x85, 0x97, 0xbd, 0x72, 0x23);

